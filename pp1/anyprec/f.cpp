#include <bits/stdc++.h>

using namespace std;
int cnt;
int even(string s, int i){
    if(i == s.size()) return cnt;
    if((s[i] - '0') % 2 == 0) cnt++;
    return even (s, i+1);
}
int main (){
    string s;
    cin >> s;
    cout << even(s, 0);
}