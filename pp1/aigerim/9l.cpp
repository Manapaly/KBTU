#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    int cnt1=0;

    for(int i=1;i<=a;i++){
        int b;
        cin>>b;
        if(b==0){
            cout<<"yes"<<" ";
            return 0;
        }
    }
    cout<<"no";
    return 0;
}