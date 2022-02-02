#include <iostream>

using namespace  std;

int fhi(int n){
    if (n==0 || n==1) return 1;
    int a=1;
    int b=1;
    int c=0;
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    int n;
    cin>>n;

    cout<<fhi(n);
    return 0;
}
