// summa chisel ot 1 do N
#include <iostream>

using namespace std;

int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}

int main(){
    long long n;
    cin>>n;
    cout<<sum(n);
    return 0;
}