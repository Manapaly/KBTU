#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    vector<int> v;
    while(cin >> x){
        v.push_back(x);
    }
    int k = 0;
    for(int i = 1; i < v.size()-1; i++){
        k=k+v[i];
    }
    if(k>=v.size()){
        cout<<1;
    }else{
        cout<<0;
    }

    return 0;
}