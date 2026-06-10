#include<bits/stdc++.h>
using namespace std;

int main(){
    int D, M;
    cin >> D >> M;
    if(D == M){
        cout << "DATA SEGURA";
    }
    else{
        if(D<=12 && M<=12){
            cout << "DATA INCERTA";
        }
        else{
            cout << "DATA SEGURA";
        }
    }
}