#include <bits/stdc++.h>

using namespace std;

int main(){
    int m;
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   
    for(int i=0;i<m;i++){
        swap(a[i][i],a[i][m-i-1]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}