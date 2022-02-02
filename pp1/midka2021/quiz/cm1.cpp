#include <iostream>

using namespace std;

int main(){
    int n;
    string d;
    cin>>n;

    while(n!=0){
        d=char(n%8+48)+d;
        n=n/8;
    }
    cout<<d;
    return 0;
}