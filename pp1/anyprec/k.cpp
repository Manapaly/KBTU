#include <bits/stdc++.h>

using namespace std;
int mx;
int maxDigit(string s, int i){
    if(i == s.size()) return mx;
    if(s[i] - '0' > mx){
        mx = s[i] - '0';
    }
    return maxDigit(s, i+1);
}
int main (){
    string s;
    cin >> s;
    cout << maxDigit(s, 0);
}