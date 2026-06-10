#include<bits/stdc++.h>
using namespace std;
int main(){
    int op=1,partida=0,vit_inter=0,vit_gre=0,empate=0,p_inter,p_gre;
    while(op!=2){
        cin >> p_inter >> p_gre;
        if(p_inter>p_gre) vit_inter++;
        else if(p_gre>p_inter) vit_gre++;
        else empate++;
        partida++;
        
        cout << "Novo grenal (1-sim 2-nao)"<<endl;
        cin >> op;
    }
    cout << partida <<" grenais"<<endl;
    cout << "Inter:"<<vit_inter<<endl;
    cout << "Gremio:"<<vit_gre<<endl;
    cout << "Empates:"<<empate<<endl;
    if(vit_inter>vit_gre) cout << "Inter venceu mais"<<endl;
    else if(vit_inter<vit_gre) cout << "Gremio venceu mais"<<endl;
    else cout << "Nao houve vencedor"<<endl;
}