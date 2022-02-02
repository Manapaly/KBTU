#include <bits/stdc++.h>

using namespace std;

int main(){
    double n,p,t;
    cin>>n>>p>>t;
    //cout<< n*p << endl;
    double g=0;
    if(n==1){
        for(int i=0;i<t;i++){
            g=g+n*p;
            n=n-n*p;
        }
    }else{
        int y;
        for(int i=0;i<t;i++){
            g=g+1*p;
            n=n-1;
            if(n==1){
                y=i;
                break;
            }
        }
        for(int i=y;i<t;i++){
            g=g+n*p;
            n=n-n*p;
        }
    }
    cout<<g;
    return 0;
}