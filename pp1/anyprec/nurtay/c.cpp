#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    multimap<int,pair<string,string> > m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        string s1;
        string s2;
        cin>>s1>>s2;
        m.insert(make_pair(x,make_pair(s1,s2)));
    }
    multimap<int,pair<string,string> > :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).second.first<<" "<<(*it).second.second<<endl;
    }
}