#include<bits/stdc++.h>
using namespace std;
 
int main(){
	vector<int>n;
	int n_x;
	int x;
	cin >> n_x;
	for(int i=0; i<n_x; i++){
		cin >> x;
		n.push_back(x);
	}
	sort(n.begin(),n.end());
	for(int i=0; i<n_x; i++){
		cout << n[i] << " ";
	}
}