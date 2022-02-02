#include <bits/stdc++.h>

using namespace std;

int main(){
    double n,k;
    int cnt=1;
    cin>>n>>k;
    while(n<k){
        n=n+n*0.1;
        cnt++;
    }
    cout<<cnt;
    return 0;
}