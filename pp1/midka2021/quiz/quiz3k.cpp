#include <iostream>

using namespace std;

int f(int n,int k){
    if(n==0) return 1;
    
    return k*f(n-1,k)+f(n-2,1);
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    cout<<f(n,k)<<endl;
    return 0;
}