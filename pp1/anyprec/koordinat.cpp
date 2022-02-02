#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    map<int,vector<pair<int,int> > > m;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int l=a[i][j];
            m[l].push_back(make_pair(i+1,j+1));
        }
    }
    map<int,vector<pair<int,int> > >  :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<"Occurences of: "<<it->first<<" = ";
        for(int i=0;i<it->second.size();i++){
            cout<<"["<<(*it).second[i].first<<" "<<(*it).second[i].second<<"]"<<" ";
        }
        cout<<endl;
    }
    return 0;
}