#include<bits/stdc++.h>
using namespace std;
 
#define INF 0x3f3f3f3f
 
int main(){
	int n_cases;
	int n_at;
	int x;
	vector<int> n;
	
	cin >> n_cases;
	for(int i=0; i<n_cases; i++){
		int menor = INF;
		cin >> n_at;
		for(int j=0; j<n_at; j++){
			cin >> x;
			n.push_back(x);
		}
		sort(n.begin(),n.end());
		for(int j=1; j<n_at; j++){
			if(abs(n[j] - n[j-1]) < menor){
				menor = abs(n[j] - n[j-1]);
			}
		}
		n.clear();
		cout << menor << endl;
	}
}