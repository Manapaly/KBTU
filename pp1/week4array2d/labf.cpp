#include <iostream>

using namespace std;

int main(){
    int n;
    int r=0;
    int c=0;
    cin>>n;
    
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int long maxi=-1000000001;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>maxi){
                maxi=a[i][j];
                r=i+1;
                c=j+1;
            }
        }
        
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(a[i][j]==maxi){
    //             r=i+1;
    //             c=j+1;
    //         }
    //     }
        
    // }
    cout<<r<<" "<<c;
    

    return 0;
}