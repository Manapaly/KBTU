#include <bits/stdc++.h>

using namespace std;
string s;
string toknary(int n,int m){
    int k;
    k=n%m;
    if(k>=10){
        s=char(k-10+'A')+s;
    }else if(k<10){
        s=char(k+48)+s;
    }
    if(n==0) return s;
    return toknary(n/m,m);
}


int main(){
    int n,m;
    cin>>n>>m;
    if(n==0 || m==0){
        cout<<0;
        return 0;
    }
    string q=toknary(n,m);
    for(int i=1;i<q.size();i++){
        cout<<q[i];
    }

    return 0;
}