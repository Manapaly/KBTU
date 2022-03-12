#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int k;
        cin>>k;
        long long a[k];
        a[0] = 1;
        a[1] = 2;
        long long sum = 0;
        if(k==1 ){
            cout<<2<<endl;
        }else{
            for(int i=2;i<k;i++){
                a[i] = a[i-1] + a[i-2];
                if(a[i]%2==0 && a[i]<k){
                    sum = sum + a[i];
                }else if(a[i]>k){
                    break;
                }
            }
            cout<<sum+2<<endl;
        }
    }
}
