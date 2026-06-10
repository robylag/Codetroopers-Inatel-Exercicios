#include<bits/stdc++.h>
using namespace std;

int main(){
    int versoes,pessoas;
    string linguagem;
    string palavra;
    string nome;
    map<string,string>natal;
    cin >> versoes;
    cin.ignore();
    for(int i=0;i<versoes;i++){
        cin >> linguagem;
        cin.ignore();
        getline(cin,palavra);
        natal[linguagem] = palavra;
    }
    cin >> pessoas;
    cin.ignore();
    for(int i=0;i<pessoas;i++){
        getline(cin,nome);
        cin >> linguagem;
        if(natal.find(linguagem)!=natal.end()){
            cout << nome << endl;
            cout << natal[linguagem]<<endl<<endl;
        }
        cin.ignore();
    }
}