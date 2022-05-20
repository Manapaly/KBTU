#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int min = 100000;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]<min) min=a[i][j]; 
        }
    }
    // cout<<max;
    int min_i;
    int min_j;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]==min){
                min_i=i;
                min_j=j;
            } 
        }
    }
    cout<<min_i<<" "<<min_j;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}