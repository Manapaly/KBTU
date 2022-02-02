#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;
#define maxn 2005
#define inf 0x7ffffff
double dp[maxn][maxn];//dp[i][j] represents the probability that there are j persons on the elevator in the i second
int n,t;
double p;
int main()
{
    while(scanf("%d%lf%d",&n,&p,&t) != EOF){
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(int i = 1; i <= t; i++){
            for(int j = n; j >= 0;j--){
                if(j == n){
                    dp[i][j] = dp[i-1][j-1] * p + dp[i-1][j];
                }else if(j != 0){
                    dp[i][j] = dp[i-1][j-1] * p + dp[i-1][j] *(1-p);
                }else{
                    dp[i][j] = dp[i-1][j] *(1-p);
                }
            }
        }
        double ans = 0.0;
        for(int i = 0;i <= t;i++){
            ans += dp[t][i] *i;
        }
        printf("%.7lf\n",ans);
    }
    return 0;
}