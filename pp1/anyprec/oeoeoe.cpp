#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            m[s[i]]++;
        }
    }
    map<char,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<s.size();i++){
            if(m[it->first]%2==0){
                if(s[i]==it->first) s[i]='e';
            }else{
                if(s[i]==it->first) s[i]='o';
            }
            
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    
    
    return 0;
}