#include <iostream>
#include <cmath>

using namespace std;

bool prime(int x){
    int cnt=0;
    
    for(int i=1;i<x/2;i++){
        if(x%i==0){
            cnt++;
            if(cnt>=2){
                break;
            }
        }
    }
    if(cnt==1){
        return true;
    }else{
        return false;
    }
}


int factorial(int a){
    int fac=1;
    for(int i=1;i<=a;i++){
        fac *= i;
    }
    return fac;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(prime(a[i])){
            cout<<factorial(a[i])<<" ";
        }
    }
    //cout<<factorial(n);
    return 0;
}