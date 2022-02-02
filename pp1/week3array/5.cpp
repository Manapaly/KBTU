#include <iostream>

using namespace std;

int main (){
    
    int n,k,s=0;
    cin>>n;
        while(n>0){
            k=n%10;
            n=n/10;
            s+=k;
        }
        cout<<s;

    return 0;
}