#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }

    cout<<maxi-mini-n+1;

    return 0;
}