#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a,h,b,c,d,e;
    
    cin>>a; //a-берілген секунд
  
    h=(a/3600)%24;
    b=(a/60)%60/10;
    c=(a/60)%60%10;
    d=(a%60)/10;
    e=(a%60)%10;

    cout<<h<<":"<<b<<c<<":"<<d<<e;
    

   
    return 0;
}