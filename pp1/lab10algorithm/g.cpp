#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string city,city2;
    int ball,ball2;
    multimap<pair<string,string>,int > m;
    for(int i=0;i<n;i++){
        cin>>city>>ball>>city2>>ball2;
        m.insert(make_pair(make_pair(city,city2),ball+ball2));
    }
    multimap<pair<string,string>,int > :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first.first<<" and "<<(*it).first.second<<" "<<(*it).second;
        cout<<endl;
    }
    return 0;
}