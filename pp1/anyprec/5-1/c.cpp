#include <bits/stdc++.h>

using namespace std;

vector<string> ggg(vector<string> v1,vector<string> v2){
    vector<string> rrr;
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                rrr.push_back(v1[i]);
            }
        }
    }
    return rrr;
}

int main(){
    string s;
    string k;
    cin>>s;
    cin>>k;
    int g=k.size();
    string d="";
    string l="";

    vector<string> v1;
    vector<string> v2;
    for(int i=0;i<s.size();i++){
        d=d+s[i];
        v1.push_back(d);
    }
    for(int i=0;i<k.size();i++){
        l=k[i]+l;
        v2.push_back(l);
    }
    vector<string> lox=ggg(v1,v2);
    for(int i=0;i<lox.size();i++){
        cout<<lox[i]<<" ";
    }
   
    return 0;
}