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
            for(int j=0;j<m;j++){
                for(int k=j;k<m;k++){
                    if(a[i][j]>a[i][k]){
                        swap(a[i][j],a[i][k]);
                    }
                }
            }
        }
        if(i%2==1){
            for(int j=0;j<m;j++){
                for(int k=j;k<m;k++){
                    if(a[i][j]<a[i][k]){
                        swap(a[i][j],a[i][k]);
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}