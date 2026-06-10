#include<bits/stdc++.h>
using namespace std;

int main(){
    // Variáveis
    vector<long int> vec;
    long int N,L;
    long int X;
    long int count = 0;

    // Entrada dos dados
    cin >> N >> L;
    for(int i=0; i<N; i++){
        cin >> X;
        vec.push_back(X);
    }

    // Ordena todos em ordem descrescente
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    // Avalia qual a quantidade necessária e se há ainda leite sobrando
    for(int i=0; i<N; i++){
        if(L <= 0 ) break;
        if(L >= 100-vec[i]){
            count++;
            L-= 100-vec[i];
        }
    }
    cout << count;
}