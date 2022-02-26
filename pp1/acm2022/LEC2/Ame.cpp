#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("ladder.in","r",stdin);
    // freopen("ladder.out","w",stdout);
    int n;
    cin>>n;
    int dp[101];
    dp[0]=0;
    cin>>dp[1];
    for(int i=2;i<=n;i++){
        int k;
        cin>>k;
        dp[i] = max(dp[i-1],dp[i-2]) + k;
    }
    cout<<dp[n];
    return 0;
}