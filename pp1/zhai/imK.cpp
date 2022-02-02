#include <iostream>
#include <cmath>

using namespace std;
int main () {
    int a,b,c;

    cin>>a;

    b=a/60%24;
    c=a%60;
    cout<<b<<" "<<c<<endl;

    return 0;
}