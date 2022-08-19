#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = -1001;
    int res;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
            res = i;
        }
    }
    cout<<res+1;
    return 0;
}