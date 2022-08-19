#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,ans; cin>>a>>b>>c>>d>>ans;
    if(a+ans==b && c*ans==d){
        cout<<5;
        return 0;
    }else if(a+ans==b || c*ans==d){
        cout<<4;
        return 0;
    }else if(ans==1024 && b!=1024 && d!=1024){
        cout<<3;
        return 0;
    }
    cout<<2;
    return 0;
}