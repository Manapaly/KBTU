#include <iostream>

using namespace std;

int main(){
    int n,m;
    
    cin>>n;
    m=n;
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0;
    for(int i=0;i<12;i++){
        sum+=a[i];
        if(sum>=n){
            cout<<m<<" "<<i+1;
            break;
        }
        m=m-a[i];
    }
    return 0;
}