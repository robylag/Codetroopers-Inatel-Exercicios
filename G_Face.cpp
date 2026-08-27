#include<bits/stdc++.h>
using namespace std;

bool primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int rec_calc(int n);
    string text = to_string(n);
    if(primo(n)){
        for(int i=0; i<text.size(); i++){
            int j = i;
            strint aux = text;
            list<string>::iterator it = aux.begin();
            while(j--){}
            
        }
    }

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> k;
        cin >> n;

        rec_calc(n);
    }
}