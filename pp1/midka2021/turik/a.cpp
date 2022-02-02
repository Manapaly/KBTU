#include <iostream>

using namespace std;

int main(){
    int s;
    int n;
    int sum0=0;
    int sum1=0;
    int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%10==1){
                sum1++;
            }else{
                sum0++;
            }
        }
        if(sum1>sum0){
            s=sum1-sum0;
        }else if(sum1<=0){
            s=sum0-sum1;
        }
        cout<<s;
        return 0;
}