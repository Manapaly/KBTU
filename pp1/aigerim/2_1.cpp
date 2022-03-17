#include <bits/stdc++.h>

using namespace std;

int func(int k){
    int res=0;
    while(k!=0){
        res=res+k%10;
        k=k/10;
    }
    return res;
}

int main(){
    int a[6];
    int result=0;
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    for(int i=0;i<6;i++){
        result+=func(a[i]);
    }
    cout<<result;
    return 0;
}