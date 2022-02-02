#include <bits/stdc++.h>

using namespace std;

int maxifrom(vector<int> v){
    int n=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>n){
            n=v[i];
        }
    }
    return n;
}

int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[tolower(s[i])]++;
    }
    map<char,int> :: iterator it;
    vector<int> v1;
    vector<pair<char,int> > v2;
    for(it=m.begin();it!=m.end();it++){
        v1.push_back((*it).second);
        v2.push_back(make_pair((*it).first,(*it).second));
    }
    int ll=maxifrom(v1);
    vector<char> v3;
    for(int i=0;i<v2.size();i++){
        if(v2[i].second==ll) v3.push_back(v2[i].first);
    }
    string dd="";
    for(int i=0;i<s.size();i++){
        if(find(v3.begin(),v3.end(),tolower(s[i]))==v3.end()) dd+=s[i];
    }
    if(dd.size()==0){
        cout<<"All gone!";
        return 0;
    }
    cout<<dd;
    return 0;
}