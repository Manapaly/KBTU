#include <bits/stdc++.h>

using namespace std;

int f1(int a,int b){
    return ceil(double(b)/double(a));
}

int main(){
    int a,b,k; cin>>a>>b>>k;
    int s = a * b;

    for(int i=1;i<=max(a,b);i++){
        if (i*i*k>=s  && f1(i,a) * f1(i,b) <= k){
            // cout<<f1(i,a)<<" " << f1(i,b)<<" "<<i;
            cout<<i;
            return 0;
        }
    }
    return 0;
}