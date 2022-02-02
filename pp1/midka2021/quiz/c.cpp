#include <iostream>

using namespace std;

int main(){
    int n,cnt = 0, maxi = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        a[value]++;
    }
    

    for(int i=0;i<n;i++){
        if( maxi  < a[i] ) {
            maxi=a[i];
            
        }
    }
    for(int i=0;i<n;i++){
        if( maxi == a[i] ) {
            cout<<i<<" "
            
        }
    }
    
    cout << cnt;
    
return 0;
}