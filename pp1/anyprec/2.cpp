#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        long long k;
        cin>>k;
        long long sum = 0;
        for(long long i = 1;i<k;i++){
            if(i % 3 == 0 || i % 5 == 0){
                sum = sum + i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}