#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a,b,c,d;

    cin>>a; 

    b=(((a+1)/2)-1)*15+a/2*5+a*45;
    c=b/60;
    d=b%60;

    cout<<9+c<<" "<<d;

    return 0;
}