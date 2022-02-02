#include <bits/stdc++.h>

using namespace std;


int gg(int n){
    vector<int> v;
    for(int i=0;i<35;i++){
        v.push_back(pow(2,i));
    }
    while(n!=0){
        if(find(v.begin(), v.end(), n) != v.end()){
            return n;
        }
        n--;
    }
    return 0;
}

vector<int> ff(vector<int> v){
    vector<int> vv;
    map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==1){
            vv.push_back((*it).first);
        }
    }
    for(int i=0;i<vv.size();i++){
        cout<<gg(vv[i]);
    }
    return vv;
}

int main(){
    int n;
    vector<int> v;
    while(cin>>n){
        v.push_back(n);
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // return 0;
    vector<int> vv;
    vv=ff(v);
    for(int i=0;i<vv.size();i++){
        cout<<gg(vv[i])<<" ";
    }
    return 0;
}