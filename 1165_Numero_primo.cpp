#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        int cont=0;
        for(int j=1; j<=x; j++){
            if(x%j == 0){
                cont++;
            }
        }
        if(cont<=2){
            cout << x <<" eh primo"<<endl;
        }
        else{
            cout << x <<" nao eh primo"<<endl;
        }
    }
}