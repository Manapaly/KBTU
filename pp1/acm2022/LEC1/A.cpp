#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long m = n;
    vector<pair<int,int> > v ;
    for(int i=2;i<m;i++){
        if(m%i==0){
            m=m/i;
            if(m%i==0){
                int cnt=1;
                while(m%i==0){
                    cnt++;
                    m=m/i;
                }
                v.push_back(make_pair(i , cnt));
            }else{
                v.push_back(make_pair(i,1));
            }
        }
    }
    if(m!=1){
    v.push_back(make_pair(m, 0));
    }
    for(int i = 0; i<v.size()-1; i++){
        if(v[i].second!=1 and v[i].second!=0){
            cout<<v[i].first<<"^"<<v[i].second<<"*";
        }else{
            if(v[i].first!=1)
            cout<<v[i].first<<"*";
        }
    }
    cout<<v[v.size()-1].first;
    return 0;
}