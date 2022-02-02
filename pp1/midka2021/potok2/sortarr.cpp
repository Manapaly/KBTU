#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            if(a[i]>a[k]){
                swap(a[i],a[k]);
                // int d=a[i];
                // a[i]=a[k];
                // a[k]=d;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}