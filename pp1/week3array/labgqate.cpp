#include <iostream>

using namespace std;

int main(){
    int posmax,posmin;
    int n;
    cin>>n;
    int a[n];

    for (int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int maxi=a[0],mini=a[0];
    for (int i=0 ; i<n ; i++){
        if (a[i]>maxi){
        maxi=a[i];}
    
        if (a[i]<mini){
        mini=a[i];}
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxi)
        posmax=i+1;
    }
    for(int i=0;i<n;i++){
        if(a[i]==mini)
        posmin=i+1;
    }
    for(int i=0;i<n;i++){
        if(a[posmax]==maxi){
            a[posmax]=mini;
        }
    }
   
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }

return 0;
}