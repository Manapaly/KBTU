#include <bits\stdc++.h>

using namespace std;


int main(){
    int n;
    int m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
    if(i%2==0){
        for(int j=0;i<m;i++){
            for(int k=j;k<m;k++){
                if(a[i][k]>a[i][j]){
                    int q;
                    q=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=q;
                    //swap(a[i][k],a[i][j]);
                }
            }
        }
    }else{
        for(int j=0;i<m;i++){
            for(int k=j;k<m;k++){
                if(a[i][k]<a[i][j]){
                    //swap(a[i][k],a[i][j]);
                    int l;
                    l=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=l;
                }
            }
        }
    }
    }
    return 0;
}