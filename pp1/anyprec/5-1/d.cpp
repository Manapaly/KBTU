#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,k;
    cin>>s>>k;
    for(int i=0;i<k.size();i++){
        for(int j=0;j<k.size();j++){
            swap(k[i],k[j]);
            if(s==k){
                cout<<"Yes";
                return 0;
            }else{
                swap(k[i],k[j]);
            }
        }
    }
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            swap(s[i],s[j]);
            if(s==k){
                cout<<"Yes";
                return 0;
            }else{
                swap(s[i],s[j]);
            }
        }
    }
    cout<<"No";
    return  0;
}