// fibonachi 3
#include <iostream>

using namespace std;

long long memo[50];

long long f(int n){
    if(n>=50) return -1;
    if(memo[n] == -1){
        memo[n]=f(n-1)+f(n-2);
    }
    return memo[n];
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<50;i++){
        memo[i]=-1;
    }

    memo[0]=memo[1]=1;

    cout<<f(n)<<endl;
    return 0;
}