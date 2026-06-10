#include <bits/stdc++.h>
using namespace std;

int main(){
    double valor;
    cin >> valor;
    int total_centavos = valor*100;
    int notas[] = {100,50,20,10,5,2};
    int moedas[] = {100,50,25,10,5,1};
    cout<<"NOTAS:"<<endl;
    for(int i=0;i<6;i++){
        int res = total_centavos / (notas[i]*100);
        cout << res << " nota(s) de R$ "<<notas[i]<<".00"<<endl;
        total_centavos%= (notas[i]*100);
    }
    cout <<"MOEDAS:"<<endl;
    cout << total_centavos / 100 << " moeda(s) de R$ 1.00" << endl;
    total_centavos %= 100;
     for(int i=1;i<6;i++){
        int res = total_centavos / moedas[i];
        cout << res << " moeda(s) de R$ "<<fixed<<setprecision(2)<<moedas[i]/100.0<<endl;
        total_centavos%= moedas[i];
    }
}