#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<int> v;
    for(int i = 2;i<n+1;i++){
        if(n % i == 0){
            v.push_back(i);
            n=n/i;
        }
    }
    for(int i = 0;i<v.size()-1;i++){
        cout<<v[i]<<"*";
    }
    cout<<v[v.size()-1];
    return 0;
}