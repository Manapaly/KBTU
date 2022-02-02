#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    bool ok;
    ok=true;
    if(s.size()==1){
        cout<<"YES";
        return 0;
    }
    for(int i=1;i<s.size();i++){
        
        if(s.at(i)<96 || s.at(i)>122){
            cout<<"NO";
            return 0;
        }
        if(s.at(i)<s.at(i-1)) {
        ok=false;
        cout<<"NO";
        return 0;
        }
        
    }
    if(ok=true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}