#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n][n*2-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            if(i+j==n-1||j-i==n-1){
                cout<<'*';
            }else if(j-i<n-1&&j+i>n-1){
                cout<<'*';
            
            }else{
                cout<<'.';
            }

        }
        cout<<endl;
    }
    
    
    return 0;
}