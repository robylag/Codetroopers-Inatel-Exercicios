#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int pa,pb;
    float g1,g2;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>pa>>pb;
        cin>>g1>>g2;
        int cont = 0;
        while(pa<=pb){
            cont++;
            if(cont>100){
                cout << "Mais de 1 seculo."<<endl;
                break;
            }
            pa+=(g1/100)*pa;
            pb+=(g2/100)*pb;
        }
        if(cont <=100) cout << cont <<" anos."<< endl;
    }
}