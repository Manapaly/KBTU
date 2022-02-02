#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int m,n,k;
    cin>>m>>n;
    k=n/m+(n%m+(m-0.1))/m;
    cout<<k;
   
    return 0;
}