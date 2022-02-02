#include <bits/stdc++.h>

using namespace std;
int maxi(vector<int> v){
    int mmm=-20000;
    for(int i=0;i<v.size();i++){
        if(v[i]>mmm){
            mmm=v[i];
        }
    }
    return mmm;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    map<int,int> mm;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(a[i][j]>=0) cnt++;
        }
        mm.insert(make_pair(i+1,cnt));
    }
    map<int,int> :: iterator it;
    set<int> s;
    vector<int> v;
    for(it=mm.begin();it!=mm.end();it++){
        s.insert((*it).second);
        v.push_back((*it).second);
        //cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    if(s.size()==1){
        cout<<"Numbers are equal";
        return 0;
    }
    int y=maxi(v);
    for(it=mm.begin();it!=mm.end();it++){
        if(y==(*it).second){
            cout<<(*it).first<<" ";
        }
    }
    return 0;
}