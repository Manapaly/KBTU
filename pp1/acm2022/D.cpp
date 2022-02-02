#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>-1){
        n=n-1;
        if(n>=0){
            cnt++;
        }
        n=n-2;
        if(n>=0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}