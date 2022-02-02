#include <bits/stdc++.h>

using namespace std;

long long gg(string s){
    long long k=0;
    for(int i=0;i<s.size();i++){
        k=k+int(s[i]-'0');
        k=k*10;
    }
    return k/10;
}

string ff(vector<string> v){
    string ss="";
    for(int i=0;i<v.size();i++){
        ss=ss+v[i];
    }
    return ss;
}

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    int k; cin>>k;
    vector<string> v1;
    vector<string> v2;
    for(int i=0;i<k-1;i++){
        v1.push_back(v[i]);
    }
    for(int i=k-1;i<v.size();i++){
        v2.push_back(v[i]);
    }
    long long ggg=gg(ff(v1))*gg(ff(v2));
    cout<<ggg;
    return 0;
}