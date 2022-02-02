#include <iostream>

using namespace std;

bool powof2(float n){
    bool ok=false;
    if(n==1) return true;
    if(n==0) return ok;
    ok=powof2(float(n)/2);
    return ok;
}

int main(){
    int n;
    cin>>n;
    powof2(n) ? cout << "Yes" : cout << "No";
    return 0;
}