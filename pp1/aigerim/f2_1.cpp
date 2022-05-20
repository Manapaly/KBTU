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
    int max = -100000;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]>max) max=a[i][j]; 
        }
    }
    // cout<<max;
    int max_i;
    int max_j;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]==max){
                max_i=i;
                max_j=j;
            } 
        }
    }

    for(int i=max_j+1;i<m;i++){
        a[max_i][i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}