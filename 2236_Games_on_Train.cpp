#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n,k;
    string s;

    cin >> t;
    for(int m=0; m<t; m++){
        int min = 100;
        int max = 0;
        cin >> n;
        for(int h=0; h<n; h++){
            cin >> k;
            if(k<=min) min = k;
            if(k>=max) max = k;
        }
        int calc = max - min + 1;
        cout << calc << endl;
    }
}