#include<bits/stdc++.h>
using namespace std;

int main(){
    int max = 100000;
    int N,P,B,T;
    int maior_B = 0, maior_T = max;
    cin >> N >> P;
    for(int i=0; i<N; i++){
        cin >> B >> T;
        if(B > maior_B){
            maior_B = B;
            maior_T = max;
        }
        if(T <= maior_T && B>=maior_B){
            maior_T = T;
        }
    }
    if(maior_B == P){
        cout << maior_B << " " << maior_T-1;
    }
    else{
        cout << maior_B+1 << " " << maior_T;
    }
}