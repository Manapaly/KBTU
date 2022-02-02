#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<pair<int,int>,int > &p1,pair<pair<int,int>,int > &p2){
    if(p1.first==p2.first && p1.first.second==p2.first.second){
        return p1.second>p2.second;
    }
    if(p1.first==p2.first && p1.first.second!=p2.first.second){
        return p1.first.second>p2.first.second;
    }
    return p1.first>p2.first;
}

bool mysort1(pair<pair<int,int>,int > &p1,pair<pair<int,int>,int > &p2){
    if(p1.first==p2.first && p1.first.second==p2.first.second){
        return p1.second<p2.second;
    }
    if(p1.first==p2.first && p1.first.second!=p2.first.second){
        return p1.first.second<p2.first.second;
    }
    return p1.first<p2.first;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    multimap <pair<int,int>,int > m;
    
    for(int i=0;i<n;i++){
        int hours,minutes,seconds;
        cin>>hours>>minutes>>seconds;
        m.insert(make_pair(make_pair(hours,minutes),seconds));
    }
    vector<pair<pair<int,int>,int > > v(m.begin(),m.end());
    if(s=="dec"){
        sort(v.begin(),v.end(),mysort);
        for(int i=0;i<v.size();i++){
            cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
        }
        return 0;
    }else{
        sort(v.begin(),v.end(),mysort1);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    }
    return 0;
}