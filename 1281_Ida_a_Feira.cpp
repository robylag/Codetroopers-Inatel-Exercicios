#include<bits/stdc++.h>
using namespace std;

int main(){
    int idas, qtd_prod, qtd_venda,qtd;
    float preco;
    string nome_prod;
    cin >> idas;
    for(int i=0;i<idas;i++){
        map<string,float>frutas;
        float res = 0;
        cin >> qtd_prod;
        for(int j=0;j<qtd_prod;j++){
            cin >> nome_prod >> preco;
            frutas[nome_prod] = preco;
        }
        cin >> qtd_venda;
        for(int j=0;j<qtd_venda;j++){
            cin >> nome_prod >> qtd;
            if(frutas.find(nome_prod)!=frutas.end()){
                res += qtd*frutas[nome_prod];
            }
        }
        cout << "R$ "<<fixed<<setprecision(2)<<res<<endl;
    }
}