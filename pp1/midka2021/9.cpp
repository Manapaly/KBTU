#include <bits/stdc++.h>

using namespace std;

int numofone(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') cnt++;
    }
    return cnt;
}
int numofzero(string s){
    int cntt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') cntt++;
    }
    return cntt;
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
    cout<<inttobin(n)<<endl;
    cout<<"zeros "<<numofzero(inttobin(n))<<endl;
    cout<<"number of units "<<numofone(inttobin(n))<<endl;
   
    return 0;
}