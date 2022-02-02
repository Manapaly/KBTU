#include <iostream>

using namespace std;

int main(){
    int sum=0,k;
    do{
        cin>>k;
        sum+=k;
    }while(k!=0);


    cout<<sum;
    return 0;
}