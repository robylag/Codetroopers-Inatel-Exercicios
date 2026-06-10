#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int f1,f2,j=1,m;
        cin>>f1>>f2;
        int a = f1;
        int b = f2;
        while (b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        cout<<a<<endl;
    }
    
}