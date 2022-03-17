#include <bits/stdc++.h>

using namespace std;

bool IsPrime(int x){
    x = abs(x);
    if(x==0 || x==1 || x==2){
        return true;
    }
    bool test = true;
    for(int i=2; i<=sqrt(x)+1; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    int k[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>k[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(IsPrime(k[i][j])==true){
                cout<<pow(k[i][j],2)<<" ";
            }else{
                cout<<k[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}