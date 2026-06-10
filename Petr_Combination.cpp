// Bibliotecas
#include<bits/stdc++.h>
using namespace std;
 
int result(int a[],int soma,int i,int tamanho){
	if(i > tamanho-1){
		if(soma%360 == 0){
			return 0;
		}
		else{
			return -1;
		}
	}
	return max(result(a,soma+a[i],i+1,tamanho),result(a,soma-a[i],i+1,tamanho));
}
 
//Código principal
int main(){
	int t;
	int a[180];
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> a[i];
	}
	if(result(a,0,0,t) == 0){
		cout <<"YES"<<endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}