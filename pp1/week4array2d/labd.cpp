#include <iostream>

using namespace std;

int main(){
    int n;
   
    cin>>n;
    // int a[0][0]=0;
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[0][i]=i;
            a[j][0]=j;
            a[i][j]=i*j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}