#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a;
    cin>>a;

    bool b=true;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            b=false;
            break;
        }
    }
    if(b) cout<<"The prime is prime";
    else cout<<"The prime is not prime";
    return 0;
}