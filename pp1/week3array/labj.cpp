#include <iostream>

using namespace std;

int main(){
    long long n,m;
    int index;
    cin>>n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(m>a[i] && m<a[i+1]){
           index = i;
        }else if(m<a[0]){
            index = -1;
        }else if(m>a[n-1]){
            index = n-1;
        }else if(m==a[i]){
            index = i;
        }
    }
    // for(int i=0;i<n;i++){
    // cout<<a[i]<<" ";
    // }
    
    cout<<index+1;
    return 0;
}