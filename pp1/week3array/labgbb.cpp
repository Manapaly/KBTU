#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mini=a[0];
    int maxi=a[0];

    for(int i=1;i<n;i++){
        mini=min(mini, a[i]);
        maxi=max(maxi, a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxi){
            a[i]=mini;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}