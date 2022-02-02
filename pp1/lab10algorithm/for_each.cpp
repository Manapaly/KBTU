#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(int x){
    cout<<x*2<<" ";
}
int main(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    for_each(v.begin(),v.end(),func);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    
    return 0;
}