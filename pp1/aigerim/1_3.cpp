#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[i][j]!=0){
                cnt++;
            }
        }
        if(cnt==n-1){
            cout<<i<<" ";
        }
    }
    return 0;
}