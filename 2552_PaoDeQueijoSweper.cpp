#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin >> n >> m){
        int matriz[n][m] = {0};
        int grid[n][m];
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matriz[i][j];
                grid[i][j] = matriz[i][j];
            }
        }
        for(int i = 0; i<n;i++){
            for(int j=0;j<m;j++){
                if(matriz[i][j]==1) matriz[i][j]=9;
                else{
                    // Verificando seus arredores pro cima, baixo, esquerda e direita
                    if (i > 0 && grid[i - 1][j] == 1) matriz[i][j]++;
                    // Cima
                    if (i < n - 1 && grid[i + 1][j] == 1) matriz[i][j]++;
                    // Baixo
                    if (j > 0 && grid[i][j - 1] == 1) matriz[i][j]++;
                    // Esquerda
                    if (j < m - 1 && grid[i][j + 1] == 1) matriz[i][j]++;
                    // Direita
                }
            }
        }
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matriz[i][j];
            }
        cout<<endl;
        }   
    }
    return 0;
}