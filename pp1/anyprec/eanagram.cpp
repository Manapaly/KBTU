#include <bits/stdc++.h>

using namespace std;

string ss(string s){
    string ss="";
    vector<char> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        ss=v[i]+ss;
    }
    return ss;
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(ss(s1)==ss(s2)) cout<<"YES";
    else cout<<"NO";
    return 0;
}