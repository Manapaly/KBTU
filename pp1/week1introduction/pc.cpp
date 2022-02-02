#include <iostream>
using namespace std;
int main(){
    int n,e,f,g;
    cin>>n;
   
    int a=n%2;
    e=n/2;

    int b=e%2;
    f=e/2;

    int c=f%2;
    g=f/2;
    

    int d=n%2;
     
    cout <<d<<c<<b<<a<<endl;
    cout <<a<<b<<c<<d<<endl;
    cout <<a*8+b*4+c*2+d*1<<endl;

    return 0;
}