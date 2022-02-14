#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.push_back(90);
    if(v[0]>15){
        cout<<15;
        return 0;
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i] > 15){
            cout<<v[i]+15;
            return 0;
        }
    }
    cout<<90;
    return 0;
}