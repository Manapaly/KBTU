#include <iostream>

using namespace std;

int main (){
    int n,pos;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxi)
        maxi=a[i];   
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxi)
        pos=i+1;
    }
    cout<<pos;
    return 0;
}