#include <bits/stdc++.h>

using namespace std;

int numofone(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') cnt++;
    }
    return cnt;
}
string inttobin(int n){
    string k="";
    while(n!=0){
        k=char(n%2+'0')+k;
        n=n/2;
    }
    return k;
}

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    
    for(int i=0;i<=n;i++){
        cout<<numofone(inttobin(i));
    }
   
    return 0;
}