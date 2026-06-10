#include<bits/stdc++.h>
using namespace std;
int main(){
    int n_casos;
    cin >> n_casos;
    for(int i=0;i<n_casos;i++){
        int cont = 0;
        int alunos;
        cin >> alunos;
        int nota_aluno[alunos];
        vector<int> ordem_nota(alunos);
        for(int j=0;j<alunos;j++){
            cin >> nota_aluno[j];
            ordem_nota[j] = nota_aluno[j];
        }
        sort(ordem_nota.begin(),ordem_nota.end());
        reverse(ordem_nota.begin(),ordem_nota.end());
        for(int j=0;j<alunos;j++){
            if(nota_aluno[j] == ordem_nota[j]){
                cont++;
            }
        }
        cout << cont << endl;
    }
}