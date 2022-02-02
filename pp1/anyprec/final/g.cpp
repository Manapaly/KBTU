#include <bits/stdc++.h>

using namespace std;

int maxi(vector<int> v){
    int sss=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>sss){
            sss=v[i];
        }
    }
    return sss;
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
    int k=maxi(v);
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).first==k) cout<<(*it).second;
    }
    return 0;
}