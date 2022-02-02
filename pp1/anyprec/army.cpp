#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"Ne chetko";
    }
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=2*(i+1)-1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}