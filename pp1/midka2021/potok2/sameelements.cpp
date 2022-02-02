#include <iostream>

using namespace std;

void cini(int a[],int n){
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        a[value]++;
    }
}
int a[101];
int b[101];
int main(){
    int n;
    cin>>n;
    // int a[101];
    // int b[101];
    cini(a,n);
    cini(b,n);
    int cnt=0;
    for(int i=0;i<101;i++){
        cnt=cnt+min(a[i],b[i]);
    }
    cout<<cnt;
    return 0;
}