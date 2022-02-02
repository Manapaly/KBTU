#include <iostream>

using namespace std;

bool powof2(float n){
    if(n==1) return true;
    if(n==0) return false;
    powof2(float(n)/2);
}

int main(){
    int n;
    cin>>n;
    powof2(n) ? cout << "Yes" : cout << "No";
    return 0;
}