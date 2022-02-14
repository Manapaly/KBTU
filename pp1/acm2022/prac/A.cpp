#include <bits/stdc++.h>

using namespace std;

int summ(vector<int> v){
    int j=0;
    for(int i=0;i<v.size();i++){
        j=j+v[i];
    }
    return j;
}

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    vector <int> v;
    for(int i=1;i<=w;i++){
        v.push_back(k*i);
    }
    if(summ(v)<=n){
        cout<<0;
        return 0;
    }
    cout<<summ(v)-n;
    return 0;
}