#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;  

    int a[n], b[k];
    
    for(int i=0;i<n; i++){
        cin >> a[i];
    }

    
    for(int i=0;i<k; i++){
        cin >> b[i];
    }

    for(int i=0;i<k; i++){
        int x = b[i];

        int l=0, r=n-1, c=0;
        
        while(l<=r){
            int mid=(l+r)/2;
            
            if( a[mid] == x){
                cout << "YES" << endl;
                c = 1;
                break;
            }
            if(a[mid] > x){
                r=mid-1;
                
            }
            else if(a[mid]<x){
                l=mid+1;
            }
            
        }
        if(c==0){
            cout << "NO" << endl;
        }
        c=0;

    }

    return 0;
}