#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

float hyp(float a,float b){
    return sqrt(a*a+b*b);
}
    

int main(){
    float a,b;
    cin>>a;
    cin>>b;
    

    cout<<setprecision(4)<<hyp(a,b);


    return 0;
}