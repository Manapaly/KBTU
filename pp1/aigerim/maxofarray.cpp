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
    int mani=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<mani){
            mani=a[i];
            cout<<"mani "<<mani<<endl;
        }
    }
    cout<<mani;
    return 0;
}