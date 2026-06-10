#include <bits/stdc++.h>
 
#define rep(i,a,b) for(int i = a; i < b; i++)
 
using namespace std;
 
int main(){
	int n, a[100100];
 
	cin >> n;
	rep(i, 0, n){
		cin >> a[i];
	}
	
	sort(a, a+n);
 
	int ans = 1;
	rep(i, 0, n){
		if(a[i] >= ans) ans++;
	}
		
	cout << ans << "\n";
}