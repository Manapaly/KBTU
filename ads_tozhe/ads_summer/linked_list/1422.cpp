#include <bits/stdc++.h>

using namespace std;

long long gcd(int a, int b){
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<(a*b)/gcd(a,b);
    return 0;
}