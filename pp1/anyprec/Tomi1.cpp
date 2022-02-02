#include <bits/stdc++.h>

using namespace std;

bool good(string s,int i){
    if(i==s.size()) return true;
    if(s[i]=='0' || s[i]=='1' || s[i]=='2' 
    || s[i]=='3' || s[i]=='4' || s[i]=='5' 
    || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' ) return false;
    return good(s,i+1);
}

int main(){
    string s;
    cin>>s;
    if(good(s,0)==true) cout<<"Valid username";
    else cout<<"Wrong username";
    return 0;
}