#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(double i=a;i<=b;i++){
        if(sqrt(i)==int(sqrt(i))){
            cout<<i<<" ";
        }
    }
    return 0;
}