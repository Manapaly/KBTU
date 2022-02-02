#include <iostream>

using namespace std;

int sum(int n){
int s=0;
do{
    s=s+n%10;
    n=n/10;
}while(n>0);
return s;
}

bool isLucky(int n){
    int d=n%10;
    int s = sum(n);
    if(n%d==0) {
    return true;
    }else{ 
    return false;
    }
}

int main(){
    int k;
    cin>>k;

    if(isLucky(k)) cout<<"Yes";
    else cout<<"No";

    return 0;
}