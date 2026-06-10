#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int calc = 0;
    for(int i=1; i<=N; i++){
        calc += 2 + i;
    }
    cout << calc;
}