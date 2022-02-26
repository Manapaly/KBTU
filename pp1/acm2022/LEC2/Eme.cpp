#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int dp[n][n];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cin>>a[i][j];
        }
    }
    dp[0][0] = a[0][0];
    dp[1][0] = a[0][0] + a[1][0];
    dp[1][1] = a[0][0] + a[1][1];
    for(int i = 2;i<n;i++){
        for(int j = 0;j<=i;j++){
            dp[i+1][j+1] = a[i+1][j+1] + max(dp[i][j+1],dp[i][j]);
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }   
    
    
   
    return 0;
}