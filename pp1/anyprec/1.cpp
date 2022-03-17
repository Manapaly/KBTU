#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>0){
        string s;
        getline(cin,s);
        string k="";
        for(int j=0;j<s.size();j++){
            k=s[j]+k;
        }
        if(s==k){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}