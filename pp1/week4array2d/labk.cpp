#include <iostream>

using namespace std;

int main(){
int n,m;
int sumN=0;
int sumM=0;
cin>>n>>m;
int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sumN+=a[i][j];
        }
        cout<<"The sum of row number"<<" "<<i+1<<" "<<"is "<<sumN<<endl;
        sumN=0;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            sumM+=a[i][j];
        }
        cout<<"The sum of column number"<<" "<<j+1<<" "<<"is "<<sumM<<endl;
        sumM=0;
    }

    return 0;
}