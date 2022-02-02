#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it=s.begin();it!=s.end();it++){
        v.push_back((*it));
    }
    cout<<v[v.size()-1]*v[v.size()-2];
    return 0;
}