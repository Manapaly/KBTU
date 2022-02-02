#include <bits/stdc++.h>

using namespace std;
bool palindrome(string s, int i){
    if(s[i] != s[s.size() - 1 - i]) return false;
    if(i == s.size()/2) return true;
    return palindrome(s, i+1);
}
int main (){
    string s;
    cin >> s;
    if(palindrome(s, 0))cout << "Yes";
    else cout << "No";
}