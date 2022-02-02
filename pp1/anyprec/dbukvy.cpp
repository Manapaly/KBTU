#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline (cin,s);
    map<char,int> m;
    for(int i=97;i<=122;i++){
        m[char(i)]=0;
    }
   
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='z'){
        s[i]=tolower(s[i]);
        m[s[i]]++;
        }
    }
    map<char,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<": "<<(*it).second<<endl;
    }
    return 0;
}