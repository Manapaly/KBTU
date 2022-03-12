#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin>>n>>k;
    
    int a[n];
    for(int i = 0 ;i<n;i++){
        int l;
        cin>>l;
        a[i] = l;
    }
    cout<<a[n-k+1] - a[0];
    return 0;
}