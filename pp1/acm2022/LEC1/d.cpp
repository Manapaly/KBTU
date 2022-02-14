#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    int cnt = 0;
    for(long long i=2;i<=sqrt(n);i++){
        if(n % i == 0) cnt++;
    }
    cout<<cnt*2;
    return 0;
}