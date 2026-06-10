#include <iostream>
#include <cmath>
using namespace std;
#define LIM 1000
 
int main(){
    int a=0,b=1,num,I = 2,i,j,k;
    int c[1000];
    c[0] = 0;
    c[1] = 1;
    bool encontrado = false;
    
    cin >> num;
    while(I!=1000){
        c[I] = a+b;
        a = b;
        b = c[I];
        I++;
    }
    for(i=0;i<1000;i++){
        for(j=0;j<1000;j++){
            for(k=0;k<1000;k++){
                if(c[i]+c[j]+c[k] == num){
                    cout << c[i] << " " << c[j] << " " << c[k];
                    encontrado = true;
                }
                if(encontrado) break;
            }
            if(encontrado) break;
        }
        if(encontrado) break;
    }
}