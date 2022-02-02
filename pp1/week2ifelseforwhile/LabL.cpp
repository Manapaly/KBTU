#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,i;
    cin>>n;

    for(i=0;i<=n;i++){
        if(pow(2, i)<=n){
            cout<<pow(2, i)<<" ";
        }
    }
    
    
    
    return 0;
}