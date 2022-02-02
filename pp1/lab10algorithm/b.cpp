#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void func(long long x){
    cout<<pow(x,x)<<" ";
}
int main(){
    long long n;
    cin>>n;
    vector<long long> v;
    for(long long i=0;i<n;i++){
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),func);
    cout<<pow(n,n);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    
    return 0;
}