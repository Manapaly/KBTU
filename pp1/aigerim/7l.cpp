#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    int cnt=0;
    for(int i=1;i<=a;i++){
        int b;
        cin>>b;
        if(b==0){
            cnt=cnt+1;
        }
    }
    cout<<cnt;
    return 0;
}