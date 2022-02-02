#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d,e;

    cin>>a>>b>>c;

    d=a*c+b*c/100;
    e=b*c%100;
    cout<<d<<" "<<e;
    return 0;
}