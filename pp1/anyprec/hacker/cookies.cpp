#include <bits/stdc++.h>

using namespace std;

// int maxi(vector<int> v){
//     int n=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>n) n=v[i];
//     }
//     return n;
// }
int maxi1(vector<int> v,int i,int n=-200000000){
    if(i==v.size()) return n;
    if(v[i]>n) n=v[i];
    return maxi1(v,i+1,n);
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k=maxi1(v,0);
    // cout<<k;
    // return 0;
    // int l=maxi(v);
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            cout<<i+1<<" ";
        }
    }
    return 0;
}