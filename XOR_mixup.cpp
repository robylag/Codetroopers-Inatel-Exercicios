#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	int vetor[1000];
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> vetor[i];
		}
		int total = 0;
		for(int i=0; i<n; i++){
			total ^= vetor[i];
		}
		cout << (total ^ vetor[0]) << endl;
	}
}