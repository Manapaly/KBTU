#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string g=s;
    string k;
    cin>>k;
    cin>>s;
    vector <string> v;
    for(int i=0;i<s.size();i++){
        rotate(g.begin(),g.begin()+i,g.end());
        v.push_back(g);
        g=s;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            cout<<i;
            return 0;
        }
    }
    cout<<"Impossible";
    return 0;
}