#include <bits/stdc++.h>
using namespace std;
int minofvect(vector<int> v){
    int mini=1000000;
    for(int i=0;i<v.size();i++){
        if(v[i]<mini){
            mini=v[i];
        }
    }
    return mini;
}
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    vector<int> v;
    vector<int> vv;
    for(int i=0;i<s.size();i++){
        if(s[i]==c)
        v.push_back(i);
    }
    for(int i=0;i<s.size();i++){
        vector<int> vvv;
        for(int j=0;j<v.size();j++){
            vvv.push_back(abs(i-v[j]));
        }
        vv.push_back(minofvect(vvv));
    }
    for(int i=0;i<vv.size();i++){
        cout<<vv[i]<<" ";
    }
    return 0;
}