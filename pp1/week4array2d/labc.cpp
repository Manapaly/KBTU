#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;;
    
    int a[n][m];
    int sumneg=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]<0){
                sumneg+=1;
            }
        }
    }
    cout<<sumneg;

    return 0;
}