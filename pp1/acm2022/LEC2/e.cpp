#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("slalom.in","r",stdin);
    // freopen("slalom.out","w",stdout);
    int n;
    cin>>n;
    int a[n+2][n+2];
    int dp[n+2][n+2];
    for(int i = 0;i<n+2;i++){
        for(int j = 0;j<n+2;j++){
            a[i][j] = -1000000;
            dp[i][j] = -1000000;
        }
    }
    for(int i = 1; i <=n ;i++){
        for(int j = 1;j <=i; j++){
            cin>>a[i][j];
        }
    }
    // for(int i = 0;i<n+2;i++){
    //     for(int j = 0;j<n+2;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    dp[1][1] = a[1][1];
    dp[2][1] = a[1][1]+a[2][1];
    dp[2][2] = a[1][1]+a[2][2];
    for(int i = 3;i<n+2;i++){
        for(int j = 0;j<=i;j++){
            dp[i][j] = a[i][j] + max(dp[i-1][j],dp[i-1][j-1]);
        }
    }
    // for(int i = 0;i<n+2;i++){
    //     for(int j = 0;j<n+2;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int b[n+2];
    int max=-1;
    for(int i = 0;i<n+2;i++){
        if(max<dp[n][i]){
            max = dp[n][i];
        }
    }
    cout << max;
    return 0;
}