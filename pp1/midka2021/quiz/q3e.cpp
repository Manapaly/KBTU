#include <bits/stdc++.h>

using namespace std;

int divisors(int x){
    int cnt=0;
    for(int i=x-1;i>=1;i--){
        if(x%i==0) cnt++;
    }
    return cnt;
}
int g(int x){
    int larg=0;
    for(int i=x-1;i>=1;i--){
        if(x%i==0){
            larg=i;
            break;
        }
    }
    return larg;
}

int f(int x){
    if(x==1) return 1;
    return divisors(x)+f(g(x));
}
int main(){
    int x;
    cin>>x;
   
    cout<<f(x);
    return 0;
}