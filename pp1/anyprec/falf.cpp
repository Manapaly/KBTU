#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n+1][n+1];
    int l=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            a[i][j]=char(l);
            l++;
            if(l>=91) l=65;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}