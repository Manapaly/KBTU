#include <iostream>
using namespace std;
int main (){
    int a,h,b,c,d,e,f,g;
    cin>>a;
    h = (a/3600)%24;

    b = a - h*3600;

    c=(b/600)%9;
    d = b%540; 
    e=d/60;

    f=((d-e*60)/10)%9;
    g=(d-e*60)-f*10;

    cout<<h<<":";
    cout<<(b/600)%9<<d/60<<":";
    cout<<((d-e*60)/10)%9<<(d-e*60)-f*10<<endl;

    return 0;


}