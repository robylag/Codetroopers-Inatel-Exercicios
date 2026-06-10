#include <bits/stdc++.h>
using namespace std;
int main(){
    int casos;
    cin >> casos;
    cin.ignore();
    for(int i=0; i<casos;i++){
        string texto, texto_corrigido_esq,texto_corrigido_dir,rev_esq,rev_dir;
        getline(cin,texto);
        int cont;
        if(texto.length()/2!=0) cont = texto.length()/2;
        else cont = texto.length() / 2;
        for(int j = 0;j<cont;j++){
            texto_corrigido_esq += texto[j];
        }
        for(int j = cont ; j<texto.length();j++){
            texto_corrigido_dir += texto[j];
        }
        rev_esq = texto_corrigido_esq;
        reverse(rev_esq.begin(),rev_esq.end());
        rev_dir = texto_corrigido_dir;
        reverse(rev_dir.begin(),rev_dir.end());
        cout << rev_esq << rev_dir<<endl;
    }
}