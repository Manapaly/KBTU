#include <iostream>

using namespace std;

bool search(int a[],int k,int i,int n){
    if(i==n) return 0;
    if(a[i]==k) return 1;
    search(a,k,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
    if(search(a,k,i,n)){
        cout<<"Yes";
        return 0;
    }else{
        cout<<"No";
        return 0;
    }
    }
    return 0;
}