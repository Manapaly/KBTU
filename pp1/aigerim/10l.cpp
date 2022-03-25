#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    double i=1;
    // while(i<=a){
    //     if(sqrt(i)==int(sqrt(i))){
    //         cout<<i<<" ";
    //     }
    //     i+=1;
    // }
    do{
        if(sqrt(i)==int(sqrt(i))){
            cout<<i<<" ";
        }
        i+=1;
    }while(i<=a);
    return 0;
}