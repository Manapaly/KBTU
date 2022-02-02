#include <iostream>

using namespace std;

int suma(int x,int sum){
    cin>>x;
    if(x==0) return sum;
    sum=sum+x;
    return suma(x,sum);
}

    

int main(){
    int x;
    // int sum=0;
    // while(cin>>x){
    //     if(x==0) break;
    //     sum+=x;
    // }
    // cout<<sum;
    cout<<suma(x,0);
    return 0;
}