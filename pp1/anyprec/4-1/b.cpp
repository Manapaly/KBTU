#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    int k=a[n]%101;
    //cout<<k<<endl;
    int l=1;
    int g=k;
    int cnt=0;
    while(l<k){
        l=l*2;
        cnt++;
    }
    while(l!=k){
        l=l-1;
        cnt++;
    }
    if(cnt>15){
        cout<<"Gl hf";
        return 0;
    }
    cout<<cnt<<endl<<"Povezlo, povezlo";
    return 0;
}