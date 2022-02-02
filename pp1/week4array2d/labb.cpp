#include <iostream>

using namespace std;

int main(){
    int n,c;
    cin>>n;
    
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int maxi=-100001;
    int mini=100001;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>maxi){
                maxi=a[i][j];
            }else if(a[i][j]<mini){
                mini=a[i][j];
            }
        }
        
    }
   
    int maxim=-1000001;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<maxi &&  a[i][j]>maxim){
                maxim=a[i][j];
            }

        }

    }
    if(maxi==mini){
        cout<<0;
    }else{
        cout<<maxim;
    }
   

    return 0;
}