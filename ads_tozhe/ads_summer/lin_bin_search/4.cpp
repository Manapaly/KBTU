#include <iostream>

using namespace std;

string bs(int arr[], int l, int r, int x){
    while(l <= r){
        // int m = l + (r - l) / 2;
        int m = (l + r ) / 2;
        if(arr[m] == x) return "YES";
        if(arr[m] < x)
            l = m + 1;
        else if(arr[m] > x)
            r = m - 1;
    }
    return "NO";
}

int main(){
    int n,k; cin>>n>>k;
    int a[n],b[k];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];

    }
    for(int i=0;i<k;i++){
        cout<<bs(a, 0, n-1, b[i])<<endl;
    }

    return 0;
}