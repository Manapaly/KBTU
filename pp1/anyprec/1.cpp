#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int result = 0;
    int a1,b1;
    cin>>a1>>b1;
    int a2,b2;
    cin>>a2>>b2;
    for(int i=a1; i<=a2;i++){
        for(int j=b1; j<=b2;j++){
            result = result + a[i][j];
        }
    }
    cout<<result;
    return 0;
}