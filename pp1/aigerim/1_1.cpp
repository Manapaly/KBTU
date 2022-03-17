#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int cnt=1;
    int result=0;
    for(int i=0;i<9;i++){
        if(a[i]==0 && a[i+1]==0){
            cnt++;
        }else{
            cnt=1;
        }if(cnt>result){
            result=cnt;
        }
    }
    cout<<result;
    return 0;
}