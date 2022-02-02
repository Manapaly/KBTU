#include <bits/stdc++.h>

using namespace std;

int f(int n,int m){
    int l=n^m;
    return l;
}


int main(){
    int n,m;
    cin>>n>>m;
    cout<<f(n,f(m,n+m));
    return 0;
}