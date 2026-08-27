#include<bits/stdc++.h>
using namespace std;

void verification(string t1, string t2, bool &valid, int N){
    bool cond = false;
    string s;
    for(int i=1; i<N; i++){
        cin >> s;
        if(!cond){
            if(s == t1) cond = !cond;
            else{
                valid = false;
                break;
            }
        }
        else{
            if(s == t2) cond = !cond;
            else{
                valid = false;
                break;
            }
        }
    }
}

int main(){
    int N,M;
    cin >> N >> M;

    bool cond = false;
    string a = "";
    string b = "";
    for(int i=0; i<M; i++){
        a.push_back("01"[cond]);
        b.push_back("01"[!cond]);
        cond = !cond;
    }
    string s;
    bool valid = true;
    cin >> s;
    if(s == a) verification(b,a,valid,N);
    else if(s == b) verification(a,b,valid,N);
    else valid = false;

    if(valid) cout << "S";
    else cout << "N";
}