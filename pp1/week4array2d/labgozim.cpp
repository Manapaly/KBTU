#include <iostream>

using namespace std;

int main(){
    int n,m=1;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=i+1;
            if(i+j==n-1){
                cout<<m++;
            }else{
                cout<<'.';
            }
            
        }
        cout<<endl;
    }
    return 0;
}