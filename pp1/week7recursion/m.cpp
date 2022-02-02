#include <iostream>

using namespace std;

void mlab(int n,int m){
    if(m==n){
    cout<<m;
    return;
    }
    cout<<m<<" ";
    mlab(n,m+1);
}

int main(){
    int n;
    cin>>n;

    mlab(n,1);
    
    return 0;
}