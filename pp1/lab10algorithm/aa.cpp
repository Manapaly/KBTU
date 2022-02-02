#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<string,int> &p1, pair<string,int> &p2){
    if(p1.second==p2.second){
        return p1.first>p2.first;
    }
    return p1.second<p2.second;
}

int main(){
    int n;
    cin>>n;
    vector<pair<string,int> > v;
    for(int i=0;i<n;i++){
        string name;
        int k;
        cin>>name>>k;
        v.push_back(make_pair(name,k));
    }
    sort(v.begin(),v.end(),mysort);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}