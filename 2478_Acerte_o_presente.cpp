#include<bits/stdc++.h>
using namespace std;

int main(){
    string nome,i1,i2,i3,deducao;
    int qtd;
    while(cin>>qtd){
        map<string,string>pes1;
        map<string,string>pes2;
        map<string,string>pes3;
        for(int i=0; i<qtd; i++){
            cin >> nome >> i1 >> i2 >> i3;
            pes1[nome] = i1;
            pes2[nome] = i2;
            pes3[nome] = i3;
        }
        while(cin>>nome>>deducao){
            if(pes1[nome] == deducao){
                cout << "Uhul! Seu amigo secreto vai adorar o/"<<endl;
            }
            else if(pes2[nome] == deducao){
                cout << "Uhul! Seu amigo secreto vai adorar o/"<<endl;
            }
            else if(pes3[nome] == deducao){
                cout << "Uhul! Seu amigo secreto vai adorar o/"<<endl;
            }
            else{
                cout << "Tente Novamente!" <<endl;
            }
        }
    }
}