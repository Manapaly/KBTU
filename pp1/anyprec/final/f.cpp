#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    bool ok=true;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[i][j+1]!=a[j+1][i]){
                ok=false;
                break;
            }
        }
    }
    if(ok==false){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}