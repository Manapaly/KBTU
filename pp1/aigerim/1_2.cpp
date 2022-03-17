#include <bits/stdc++.h>

using namespace std;
int a[1000][1000];
float func(int m, int a[]){

    float result=0;
    for(int i=0;i<m;i++){
        result+=a[i];
    }
    return float(result/m);
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        float ava=func(m,a[i]);
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[i][j]<ava){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
    return 0;
}