#include <iostream>

using namespace std;

int bs(int arr[], int l, int r, int x){
    while(l <= r){
        // int m = l + (r - l) / 2;
        int m = (l + r ) / 2;
        if(arr[m] == x) return m;
        if(arr[m] < x)
            l = m + 1;
        else if(arr[m] > x)
            r = m - 1;
    }
    return -1;
}
int first(int a[],int x, int k){
    if(a[k-1]!=x) return k+1;
    else{
        int b = k-1;
        while(b!=0){
            if (a[b]!=x) return b+1;
            else b--;
        }
        return 0;
    }
}
int last(int a[],int x, int k){
    if(a[k+1]!=x) return k+1;
    else{
        int b = k+1;
        while(b!=21000){
            if (a[b]!=x) return b+1;
            else b++;
        }
        return 0;
    }
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
        int k = bs(a, 0, n, b[i]);
        cout<<k<<endl;
        if (k!=-1){
            cout<<first(a,b[i],k)<<" "<<last(a,b[i],k)<<endl;
        }
    }

    return 0;
}