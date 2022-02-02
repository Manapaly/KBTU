#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<int,int> &p1, pair<int,int> &p2){
    if(p1.first<p2.first){
        return p1.second<p2.second;
    }
    return p1.first<p2.first;
}
int ff(string s){
    if(s=="red") return 1;
    if(s=="orange") return 2;
    if(s=="yellow") return 3;
    if(s=="green") return 4;
    if(s=="blue") return 5;
    if(s=="indigo") return 6;
    if(s=="purple") return 7;
}

string gg(int s){
    if(s==1) return "red";
    if(s==2) return "orange";
    if(s==3) return "yellow";
    if(s==4) return "green";
    if(s==5) return "blue";
    if(s==6) return "indigo";
    if(s==7) return "purple";   
}

int main(){
    int n;
    cin>>n;
    multimap<int,int> m;
    for(int i=0;i<n;i++){
        string s;
        int a;
        cin>>s>>a;
        m.insert(make_pair(ff(s),a));
    }
    vector<pair<int,int> > v(m.begin(),m.end());
    sort(v.begin(),v.end(),mysort);
    for(int i=0;i<v.size();i++){
        cout<<gg(v[i].first)<<" "<<v[i].second<<endl;
    }
    return 0;
}