#include <bits/stdc++.h>
using namespace std;

int par[200005], sz[200005];

int find(int x) {
    while (par[x] != x) {
        par[x] = par[par[x]]; 
        x = par[x];
    }
    return x;
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++){
        par[i] = i;
        sz[i] = 1; 
    }

    for (int i = 1; i <= N; i++){
        int u, v;
        cin >> u >> v;

        int a = find(u), b = find(v);
        if (a == b) {
            cout << i << '\n';
            return 0;
        }
        if (sz[a] < sz[b]) swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
    return 0;
}