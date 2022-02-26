#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("king2.in","r",stdin);
    freopen("king2.out","w",stdout);
    int a[8][8];
    long long dp[10][10];
    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
            dp[i][j] = 100001;
        }
    }
    dp[9][0] = 0;
    for(int i = 0;i<=7;i++){
        for(int j = 0;j<=7;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 8;i>=1;i--){
        for(int j = 1;j<=8;j++){
            dp[i][j] = a[i-1][j-1] + min(min(dp[i+1][j],dp[i][j-1]),dp[i+1][j-1]);
        }
    }
    // for(int i = 0;i<10;i++){
    //     for(int j = 0;j<10;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[1][8];    
    return 0;
}