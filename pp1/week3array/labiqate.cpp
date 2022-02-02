#include <iostream>

using namespace std;

int main(){
long long n,l,r;

cin>>n;
cin>>l;
cin>>r;
int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if (l==n){
    for(int i=0;i!=l-1;i++){
        cout<<a[i]<<" ";
    }
    for(int i=(r-1);i!=l-2;i--){
        cout<<a[i]<<" ";
    }
    }else{
    for(int i=0;i!=l-1;i++){
        cout<<a[i]<<" ";
    }
    for(int i=(r-1);i!=l-2;i--){
        cout<<a[i]<<" ";
    }
    for(int i=r;i<n;i++){
        cout<<a[i]<<" ";
    }

    }
    return 0;
}