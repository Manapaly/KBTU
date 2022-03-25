#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=a-1;i>=1;i--){
        if(a%i==0){
        cout<<i<<' ';
        break;
        }
    }
    return 0;
}