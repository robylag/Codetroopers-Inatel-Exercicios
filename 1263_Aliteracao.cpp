#include <bits/stdc++.h>
using namespace std;
int main(){
    string texto;
    while(getline(cin,texto)){
        char last;
        bool on_text = false;
        int cont = 0;
        for(int i=0;i<texto.length();i++){
            if(i==0||texto[i-1]==' '){
                texto[i] = tolower(texto[i]);
                if(texto[i] == last) on_text = true;
                else if(on_text){
                    cont++;
                    on_text = false;
                }
                last = texto[i];
            }
        }
        if(on_text)cont++;
        cout << cont <<endl;
    }
}