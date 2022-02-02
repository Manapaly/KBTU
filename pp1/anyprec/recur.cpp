#include <bits/stdc++.h>

using namespace std;
string k;
string recur(vector<char> v,int i){
    if(i==-1) return k;
    if(v[i]=='(') v[i]=')';
    k=k+v[i];
    return recur(v,i-1);
}

int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    cout<<s;
    cout<<recur(v,v.size()-1);
    return 0;
}