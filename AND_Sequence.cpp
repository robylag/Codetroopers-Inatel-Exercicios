#include<bits/stdc++.h>
using namespace std;
 
#define MAX 200000
#define MOD 1000000007
long long fat[MAX];
 
void fatorial(){
	fat[0] = 1;
    fat[1] = 1;
    for(int i=2; i<MAX; i++){
        fat[i] = fat[i-1] * i % MOD;
    }
}
 
int main(){
	fatorial();
	long long int t;
	cin >> t;
	while(t--){
		long long int n;
		long long int a[MAX];
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		long long int t = a[0];
		for(int i=1; i<n; i++){
			t &= a[i];
		}
		long long int k = 0;
		for(int i=0; i<n; i++){
			if(t == a[i]) k++;
		}
		if(k<2) cout << "0" << endl;
		else{
			long long result = k % MOD * ((k-1) % MOD) % MOD * fat[n-2] % MOD;
			cout << result << endl;
		} 
		
	}
}