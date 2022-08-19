#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = -10;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    int res = -10;
    for(int i=0;i<n;i++){
        if(a[i]>res && a[i]<max){
            res = a[i];
        }
    }
    cout<<res;
    return 0;
}