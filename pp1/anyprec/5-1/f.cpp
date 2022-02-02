#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> a(10000);
    a[0]=0;
    a[1]=1;
    a.push_back(0);
    a.push_back(1);
    for(int i=2;i<=1000;i++){
        a[i]=a[i-1]+a[i-2];
    }
    if(n==1){
        cout<<"Yes";
        return 0;
    }
    if(n==0){
        cout<<"Yes";
        return 0;
    }
    if(n==2){
        cout<<"Yes";
        return 0;
    }
    if(n==3){
        cout<<"Yes";
        return 0;
    }
    if(find(a.begin(),a.end(),n)!=a.end()) cout<<"Yes";
    else cout<<"No";
    return 0;
}