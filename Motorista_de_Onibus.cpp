#include<bits/stdc++.h>
using namespace std;
#define INF 200001

struct passageiro{
    int r;
    int c;
};

int main(){
    vector<vector<long long int> > rua(INF);
    long long int N, r, c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> r >> c;
        rua[r].push_back(c);
    }
    long long int distancia = 0;
    for(int i = 0; i < INF; i++){
        if(rua[i].empty()) continue;
        sort(rua[i].begin(), rua[i].end());
        long long int count = 0;
        long long int mediana;
        for(long long int j : rua[i]){
            if(count == rua[i].size() / 2){
                mediana = j;
                break;
            } 
            else count++;
        }
        for(int j:rua[i]){
            distancia += abs(j - mediana);
        }
    }
    cout << distancia;
}