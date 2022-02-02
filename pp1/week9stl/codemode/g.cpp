#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string country;
    string city;
    multimap<string, string> m;
    int x;
    for(int i=0;i<n;i++){
        cin>>country;
        cin>>x;
        for(int j=0;j<x;j++){
            cin>>city;
            m.insert(make_pair(country, city));
        }
    }
    int k;
    cin>>k;
    string tagy;
    vector<string> er;
    for(int i=0;i<k;i++){
        cin>>tagy;
        if(m[country].find(tagy)){
            cout<<country<<endl;
        }
    }

    return 0;
}