#include <bits/stdc++.h>

using namespace std;

bool tt(string s){
    set<char> ss;
    for(int i=0;i<s.size();i++){
        ss.insert(s[i]);
    }
    if(s.size()==ss.size()) return true;
    return false;
}

int main(){
    string s;
    while(cin>>s){
        if(tt(s)) cout<<s<<endl;;
    }
    return 0;
}