#include <bits/stdc++.h>

using namespace std;

bool polindrome(string s,int i){
    
    if(s[i]!=s[s.size()-1-i]) return false;
    if (i==s.size()/2) return true;
    polindrome(s,i+1);
}
int main(){
    string s;
    cin>>s;

    if(polindrome(s,0)) cout<<"Yes";
    else cout<<"No";
    return 0;
}