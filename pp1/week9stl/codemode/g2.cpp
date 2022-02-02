#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
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
    int cnt=0;
   
    multimap<string, string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
        
    // }

    for(int i=0;i<k;i++){
        cin>>tagy;
        for(it=m.begin();it!=m.end();it++){
            if(tagy!=it->second){
                cnt++;
            }else{
                cout<<it->first<<endl;
                cnt=0;
            }
        }
        if(cnt==m.size()){
            cout<<"Ondai joq"<<endl;
            cnt=0;
        }
        cnt=0;
    }
    //cout<<m.size();
    return 0;
}