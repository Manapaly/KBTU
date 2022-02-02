#include <bits/stdc++.h>

using namespace std;

int mn(vector<pair<int,int> > vv){
    int k=0;
    for(int i=0;i<vv.size();i++){
        if(vv[i].second>k){
            k=vv[i].second;
        }
    }
    return k;
}

int main(){
    int n;
    cin>>n;
    vector <int> v;
    vector<pair<int,int> > vv;
    int k=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int t=0;
    int j=0;
    for(int i=2;i<v.size();i=i+2){
        int l=v[i]-v[i-1];
        vv.push_back(make_pair(v[i-1],l));
    }
    int tt=mn(vv);
    for(int i=0;i<vv.size();i++){
        if(vv[i].second==tt){
            cout<<vv[i].first<<" "<<vv[i].second<<endl;
        }
    }
    return 0;
}