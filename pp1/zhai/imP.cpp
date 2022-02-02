#include <iostream>
#include <cmath>

using namespace std;
int main (){
    int a,b,c,d,e,f,g,h,i,j;
    cin>>a>>b>>c>>d>>e>>f;
    g=(d-a)*3600;
    h=(e-b)*60;
    i=f-c;
    j=g+h+i;
    cout<<j;
    return 0;

}