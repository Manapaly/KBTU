#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n,k,t;
    cin>>n>>k;
    
    t=((n - k % n) % n) ;

    cout<<t;
   
    return 0;
}