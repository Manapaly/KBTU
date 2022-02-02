#include <bits/stdc++.h>

using namespace std;

bool ses(string s){
    int c=0;
    for(int i=0;i<s.size();i++){
        c=c+(s[i]-'0');
        c=c*10;
    }
    if(c/10>255 || c/10<0) return false;
    else return true;
}


string ss(string s){
    if(s[s.size()-1]=='.'){
        string gg="";
        for(int i=0;i<s.size()-1;i++){
            gg=gg+s[i];
        }
        return gg;
    }
    return s;
}
string sss(string s){
    if(s=="-0"){
        string gg="";
        for(int i=1;i<s.size();i++){
            gg=gg+s[i];
        }
        return gg;
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    vector<string> v;
    int g=0;
    string k="";
    for(int i=g;i<s.size();i++){
        k=k+s[i];
        if(s[i]=='.' || i==s.size()-1){
            g=i+1;
            v.push_back(sss(ss(k)));
            k="";
        } 
    }
    
    for(int i=0;i<v.size();i++){
        if(ses(v[i])==false){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
    return 0;
}