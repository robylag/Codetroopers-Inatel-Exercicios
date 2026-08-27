#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
struct adj { int destino, distancia; };

vector<int> dijkstra(vector<list<adj>>& adj_graph, int origem){
    int vertices = adj_graph.size();
    int menor_distancia = INF;

    vector<bool> visitado(vertices, false);
    vector<int>  distancia(vertices, INF);
    int atual;
    list<adj>::iterator it;

    distancia[origem] = 0;
    atual = origem;
    while(!visitado[atual]){
        visitado[atual] = true;
        for(it = adj_graph[atual].begin(); it != adj_graph[atual].end(); it++){
            int d = it->destino, p = it->distancia;
            if(!visitado[d] && distancia[atual] + p < distancia[d]){
                distancia[d] = distancia[atual] + p;
            }
        }
        menor_distancia = INF;
        for(int i=0; i<vertices; i++){
            if(!visitado[i] && distancia[i] < menor_distancia){
                menor_distancia = distancia[i];
                atual = i;
            }
        }
    }
    return distancia;
}

int main(){
    int N,M;
    int u,v,w;

    cin >> N >> M;

    vector<list<adj>> adj_graph(N); 
    for(int i=0; i<M; i++){
        cin >> u >> v >> w;
        u--;
        v--;
        adj_graph[u].push_back({v,w});
        adj_graph[v].push_back({u,w});
    }
    int maior = 0;
    vector<int> d_1k = dijkstra(adj_graph,0);
    vector<int> d_kj = dijkstra(adj_graph,N-1);

    for(int i=0; i<N; i++){
        maior = max(maior,d_1k[i]+d_kj[i]);
    }
    cout << maior;
}