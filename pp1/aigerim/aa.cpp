#include <bits/stdc++.h>

using namespace std;
// INT_MIN = -230015105212
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int petya;
    cin>>petya;
    for(int i=1;i<n-1;i++){
        if(petya<a[i-1] && petya>a[i]){
            cout<<i+1;
            return 0;
        }
    }
    cout<<"petya idet v konec";
    return 0;
}