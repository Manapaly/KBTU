#include <bits/stdc++.h>

using namespace std;


char cc(string s){
    if(s=="1") return 'a';
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    return char(97+m['0']);
}


int main(){
    string s;
    cin>>s;
    vector<string> v;
    string gg="";
    int k=0;
    for(int i=k;i<s.size();i++){
        gg=gg+s[i];
        if(s[i]=='1'){
            v.push_back(gg);
            k=i;
            gg="";
            // break;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<cc(v[i]);
    }
    return 0;
}