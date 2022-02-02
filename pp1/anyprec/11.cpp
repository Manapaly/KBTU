#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    char c='.';
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    cout<<s.find(c);
    //char c='.';
   // cout<<find(v.begin(),v.end(),c);
    return 0;
}