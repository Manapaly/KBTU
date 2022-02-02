#include <bits/stdc++.h>

using namespace std;

vector<pair<string,string> > tipapop(vector<pair<string,string> > v,int i){
    vector<pair<string,string> > k;
    for(int j=0;j<i;j++){
        k.push_back(make_pair(v[j].first,v[j].second));
    }
    for(int l=i+i;l<v.size();l++){
        k.push_back(make_pair(v[l].first,v[l].second));
    }
    return k;
}

int main(){
    int n;
    cin >> n;
    vector<pair<string,string> > v1;
    vector<pair<string,string> > v2;
    vector<pair<string,string> > v;
    for(int i  = 0; i < n; i++){
        string old,neww;
        cin>>old>>neww;
        v.push_back(make_pair(old,neww));
    }
    v1=v;
    map<string,string> m;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v1.size();j++){
            if(v[i].second==v1[j].first){
                v2.push_back(make_pair(v[i].first,v1[j].second));
                m[v[i].first]=v1[j].second;
                v=tipapop(v,i);
   
            }
        }
    }
    cout<<endl;
    map<string,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    return 0;
}