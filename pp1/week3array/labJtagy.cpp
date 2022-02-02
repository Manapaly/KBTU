#include <iostream>

using namespace std;

int main(){
    int n,m;
    int pos=0;
    cin>>n;
    cin>>m;
    int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(m<a[0]){
                pos=0;
            }else if(m>a[n-1]){
                pos=n;
            }else if(m>a[i]&&m<a[i+1]){
                pos=i+1;
            }else if(m==a[i]){   
                pos=i+1;           
            }
        }
    
    cout<<pos;   
    return 0;
}