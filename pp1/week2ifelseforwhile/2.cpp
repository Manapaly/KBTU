#include <iostream>
#include <cmath>

using namespace std;
int main () {
    int a,b;
    cin>>a>>b;
    bool ok;
    ok=(a>b && (a%2==0));
    cout<<ok<<endl;

    return 0;
}