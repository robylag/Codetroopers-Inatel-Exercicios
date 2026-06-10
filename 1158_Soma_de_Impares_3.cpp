#include<iostream>
using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        int res=0;
        int cont=0;
        while(cont!=y){
            if(x%2 != 0){
                cont++;
                res+=x;
            }
            x++;
        }
        cout << res << endl;
    }
}