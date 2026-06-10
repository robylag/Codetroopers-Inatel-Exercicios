#include <bits/stdc++.h>
using namespace std;

int main(){
    int nota,resto,cedula[7] = {0};
    cin >> nota;
    int nota_inicial = nota;
    if(nota%100!=0 && nota>=100){
        resto = nota%100;
        cedula[0] = (nota-resto)/100;
        nota = resto;
    }
    else if(nota%100 == 0 && nota>=100){
        cedula[0] = nota/100;
        nota = 0;
    }
    if(nota%50!=0 && nota>=50 && nota<100){
        resto = nota%50;
        cedula[1] = (nota-resto)/50;
        nota = resto;
    }
    else if(nota%50 == 0 && nota>=50){
        cedula[1] = nota/50;
        nota = 0;
    }
    if(nota%20!=0 && nota>=20 && nota<50){
        resto = nota%20;
        cedula[2] = (nota-resto)/20;
        nota = resto;
    }
    else if(nota%20 == 0 && nota>=20){
        cedula[2] = nota/20;
        nota = 0;
    }
    if(nota%10 !=0 && nota>=10 && nota<20){
        resto = nota%20;
        cedula[3] = (nota-resto)/10;
        nota = resto;
    }
    else if(nota%10 == 0 && nota>=10){
        cedula[3] = nota/10;
        nota = 0;
    }
    if(nota%5 !=0 && nota>=5 && nota<10){
        resto = nota%5;
        cedula[4] = (nota-resto)/5;
        nota = resto;
    }
    else if(nota%5 == 0 && nota>=5){
        cedula[4] = nota/5;
        nota = 0;
    }
    if(nota%2 !=0 && nota>=2 && nota<5){
        resto = nota%2;
        cedula[5] = (nota-resto)/2;
        nota = resto;
    }
    else if(nota%2 == 0){
        cedula[5] = nota/2;
        nota = 0;
    }
    if(nota == 1){
        cedula[6] = 1;
        nota = 0;
    }
    cout << nota_inicial<<endl;
    cout << cedula[0] << " nota(s) de R$ 100,00"<<endl;
    cout << cedula[1] << " nota(s) de R$ 50,00"<<endl;
    cout << cedula[2] << " nota(s) de R$ 20,00"<<endl;
    cout << cedula[3] << " nota(s) de R$ 10,00"<<endl;
    cout << cedula[4] << " nota(s) de R$ 5,00"<<endl;
    cout << cedula[5] << " nota(s) de R$ 2,00"<<endl;
    cout << cedula[6] << " nota(s) de R$ 1,00"<<endl;
}