#include <iostream>

using namespace std;

int reversenum(int x){
    int m = 0;
    while(x!=0){
    m = m*10+x%10;
    x /= 10;
    }
    return m;
}

int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<x/2;i++){
        if(a[i]!=reversenum(a[x-i-1])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}