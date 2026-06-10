#include<bits/stdc++.h>
using namespace std;
int main(){
    int casos;
    cin >> casos;
    for(int i=0;i<casos;i++){
        int cont = 0,j=0;
        string str_a,str_b;
        cin >> str_a;
        cin >> str_b;
        while(true){
            if(str_a[j]!=str_b[j]){
                if(str_a[j]=='z') str_a[j] = 'a';
                else str_a[j]++;
                cont++;
            }
            else if(j<str_a.length()) j++;
            else break;
        }
        cout << cont << endl;
    }
}