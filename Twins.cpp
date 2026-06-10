#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n_coins;
	int x;
	vector<int> coins_value;
	int sum = 0;
	int sum_me = 0;
	int cont = 0;
	
	cin >> n_coins;
	for(int i=0; i<n_coins; i++){
		cin >> x;
		sum+=x;
		coins_value.push_back(x);
	}
	sort(coins_value.begin(),coins_value.end());
	reverse(coins_value.begin(), coins_value.end());
	sum/=2;
	for(int i=0; i<n_coins; i++){
		if(sum_me <= sum){
			sum_me += coins_value[i];
			cont++;
		}
	}
	cout << cont;
}