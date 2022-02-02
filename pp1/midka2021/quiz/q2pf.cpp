#include <iostream>

using namespace std;

int main(){
    int m,n,k;
    cin>>n>>m>>k;
    int a[n][m];
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}