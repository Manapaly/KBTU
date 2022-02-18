#include <bits/stdc++.h>

using namespace std;

int factorial(int a){
    int fac=1;
    for(int i=1;i<=a;i++){
        fac *= i;
    }
    return fac;
}

float c(float a,float b){
    return factorial(a)/(factorial(b)*factorial(a-b));
}
int main(){
    cout<<(c(4,1)*c(48,12))/c(52,13)+(c(3,1)*c(36,12))/c(39,13)+(c(2,1)*c(24,12))/c(26,13)+1;
    return 0;
}