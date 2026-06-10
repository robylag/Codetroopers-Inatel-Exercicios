#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,q,case_i = 1;
    while(true){
        cin >> n >> q;
        int n_mar[n];
        int s_mar[q];
        if(n==0 && q==0) break;
        for(int i=0;i<n;i++){
            cin>>n_mar[i];
        }
        for(int i=0;i<q;i++){
            cin>>s_mar[i];
        }
        int n = sizeof(n_mar)/sizeof(n_mar[0]);
        sort(n_mar, n_mar + n);
        cout<<"CASE# "<<case_i<<":"<<endl;
        for(int i=0;i<q;i++){
            bool founded = false;
            int count[n] = {0};
            for(int j=0;j<n;j++){
                if(s_mar[i]==n_mar[j]){
                    count[i]++;
                    if(count[i]==1){
                        cout<<s_mar[i]<<" found at "<<j+1<<endl;   
                    }
                    founded = true;
                }
            }
            if(!founded) cout<<s_mar[i]<<" not found"<<endl;
        }
        case_i++;
    }
    return 0;
}