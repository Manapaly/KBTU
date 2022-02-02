#include <iostream>

using namespace std;
int maxi;
int k(int x){
    if(x==0) return maxi;
    if(x%10>maxi){
        maxi=x%10;
    }
    return k(x/10);
}

int main(){
    int n;
    cin>>n;

    cout<<k(n);
    return 0;
}