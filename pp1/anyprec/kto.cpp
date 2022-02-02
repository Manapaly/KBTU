#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<string,float>  &p1,pair<string,float>  &p2){
        if(p1.second==p2.second){
            return p1.first>p2.first;
        }
    return p1.second>p2.second;
}

int main(){
    int n;
    cin>>n;
    string name;
    int ball;
  
    map<string,int> m;
    map<string,int> :: iterator it;
    int total=0;
    for(int i=0;i<n;i++){
        cin>>name>>ball;
        total+=ball;
        m[name]+=ball;
    }
    vector<pair<string,float> > v(m.begin(),m.end());
    
    sort(v.begin(),v.end(),mysort);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<float(v[i].second*100)/float(total)<<"%"<<endl;
    }
    return 0;
}