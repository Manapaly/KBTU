#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

bool ff(string s){
    if(s[s.size()-1]=='.') return true;
    else return false;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    while(cin>>s){
        cout<<s<<" ";
    }
}