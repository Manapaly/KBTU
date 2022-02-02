#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v1;
    vector<string> v2;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v1.push_back(s);
    }
    int k;
    cin>>k;
    string g;
    for(int i=0;i<k;i++){
        cin>>g;
        v1.push_back(g);
    }
    map<string,int> m;
    for(int i=0;i<n+k;i++){
        m[v1[i]]++;
    }
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==1) cout<<(*it).first<<endl;
    }

    return 0;
}