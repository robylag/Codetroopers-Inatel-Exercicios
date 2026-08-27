#include<bits/stdc++.h>
using namespace std;

string padrao(const string& s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j]) j = pi[j-1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    int p = n - pi[n-1];                  
    if (n % p != 0) return s;             
    return s.substr(0, p);
}

int main(){
    string s;
    cin >> s;
    string res = padrao(s);
    cout << s.size()/res.size() << '\n' << res << '\n';
}