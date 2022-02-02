#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,t;
    cin>>n;
    k=n/3600;
    if(k!=0){
        l=(n-(k*3600))/60%60;
    }else{
        l=n/60;
    }
        t=n%60;
    cout<<k<<":"<<l<<":"<<t;
    return 0;
}