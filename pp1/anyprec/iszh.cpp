#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
        if(m[s[i]]==1){
            v.push_back(s[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}