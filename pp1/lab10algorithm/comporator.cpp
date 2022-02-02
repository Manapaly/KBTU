#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<string,int> &p1,pair<string,int> &p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second<p2.second;
}
int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    string name;
    int mark;
    map <string,int> m;
    for(int i=0;i<n;i++){
        cin>>name>>mark;
        m.insert(make_pair(name,mark));
    }
    vector<pair<string,int> >  v(m.begin(), m.end());
    sort(v.begin(),v.end(),mysort);
    vector<pair<string,int> > :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second;
        cout<<endl;
    }
    return 0;
}