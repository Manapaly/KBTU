#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    map<char,int> m;
    vector<char> v;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            m[tolower(s[j])]++;
        }
    }
    map<char,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>=1) v.push_back((*it).first);
    }
    string gg="";
    for(int i=0;i<26;i++){
        if(find(v.begin(),v.end(),char(97+i))==v.end()) gg=gg+char(97+i);
    }
    if(gg.size()==0) cout<<"No such characters";
    else cout<<gg;
    return 0;
}