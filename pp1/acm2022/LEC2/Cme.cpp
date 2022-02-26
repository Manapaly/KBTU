#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("knight.in","r",stdin);
    // freopen("knight.out","w",stdout);
    int n, m;
    cin>>n>>m;
    int dp[100][100];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 1;
    dp[2][1] = 1;
    dp[1][2] = 1;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(i-2>=0 && j-2>=0){
                dp[i][j] = dp[i-2][j-1] + dp[i-1][j-2];
            }
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}