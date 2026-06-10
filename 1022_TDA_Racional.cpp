#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,n1,d1,n2,d2,n_res,d_res;
    char op,barra;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> n1>>barra>>d1;
        cin >> op;
        cin >> n2 >>barra>> d2;
        switch(op){
            case '+':
                n_res = n1 * d2 + n2 * d1;
                d_res = d1 * d2;
                break;
            case '-':
                n_res = n1 * d2 - n2 * d1;
                d_res = d1 * d2;
                break;
            case '*':
                n_res = n1 * n2;
                d_res = d1 * d2;
                break;
            case '/':
                n_res = n1 * d2;
                d_res = n2 * d1;
                break;
        }
        cout << n_res<<"/"<<d_res <<" = ";
        int a = abs(n_res);
        int b = abs(d_res);
        while(b != 0) {
            int resto = a % b;
            a = b;
            b = resto;
        }
        int mdc = a;
        cout <<n_res/mdc<<"/"<<d_res/mdc<<endl;
    }
}