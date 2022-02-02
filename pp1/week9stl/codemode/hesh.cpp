#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<char((a[0]+pow(2,0)*97)/pow(2,0));
    for(int i=1;i<n;i++){
        cout<<char((a[i]-a[i-1]+pow(2,i)*97)/pow(2,i));
    }
    return 0;
}