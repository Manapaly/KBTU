#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> m;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            string city;
            int cnt;
            cin>>city>>cnt;
            sum+=cnt;
            m[city]+=cnt;
        }
    }
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<double((double((*it).second)/sum) * 100);
        cout<<endl;
    }
    return 0;
}