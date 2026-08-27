#include<bits/stdc++.h>
using namespace std;

int function_calc(int n){
    int calc = 0;
    string texto = to_string(n);
    for(int i=0; i<texto.size(); i++){
        calc += texto[i] - 48;
    }
    return calc;
}

int main(){
    int n;
    int calc = 0;
    cin >> n;

    int v[101];
    v[0] = 1;
    for(int i=1; i<=n; i++){
        v[i] = 0;
        for(int j=0; j<i; j++){
            v[i] += function_calc(v[j]);
        }
    }
    cout << v[n];
}