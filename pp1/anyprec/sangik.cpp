#include <bits/stdc++.h>

using namespace std;

int main(){
    int p,t,a;
    cin>>p>>t>>a;
    vector<int> v;
    for(int i=0;i<a;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        int k=v[i]/t;
        if(k>=10){
            cnt=cnt+10;
        }else{
            cnt=cnt+k;
        }
    }
    if(cnt>=p){
        cout<<"Stipuha est' - mozhno poest'"<<endl;
        cout<<cnt;
    }else{
        cout<<"Voronkov chert!"<<endl;
        cout<<cnt;
    }
    return 0;
}