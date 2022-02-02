#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    int k=0;
    for(int i=0;i<s.size();i++){
        k++;;
        for(int j=0;j<k;j++){
            cout<<v[j];
        }
        cout<<endl;
    }
    int l=v.size();
    for(int i=0;i<s.size();i++){
        l--;
        for(int j=0;j<l;j++){
            cout<<v[j];
        }
        cout<<endl;
    }
    return 0;
}