#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long rr;
   
    char a[rr];
    int cnt = 0;
    for(int j =0;j<n;j++){
        int u,b;
        cin>>u>>b;
        for(int i = u;i<b;i++){
            if(a[i]!='+'){
                cnt++;
            }
            a[i] = '+';
        }
    }
    cout<<cnt;
    return 0;
}