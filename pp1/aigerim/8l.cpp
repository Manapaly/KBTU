#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    for(int i=1;i<=a;i++){
        int b;
        cin>>b;
        if(b==0){
            cnt1++;
        }
        if(b>0){
            cnt2++;
        }
        if(b<0){
            cnt3++;
        }
        
    }
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
    return 0;
}