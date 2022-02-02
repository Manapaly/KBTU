#include <iostream>

using namespace std;

void maxa(int a,int b,int c,int d){
    int k[4]={a,b,c,d};
    int maxi=0;
    for(int i=0;i<4;i++){
        if(k[i]>maxi)
        maxi=k[i];
    }
    cout<<maxi;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    maxa(a,b,c,d);
    return 0;
}