#include <bits/stdc++.h>

using namespace std;

string tolowerr(string s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

int main(){
    string s;
    map<string,int> m;
    while(cin>>s){
        s=tolowerr(s);
        m[s]++;
    }
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}