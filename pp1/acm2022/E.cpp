#include <bits/stdc++.h>

using namespace std;


int main(){
    int q;
    cin>>q;
    while(q--){
        vector<vector<int> > vv;
        int k;
        cin>>k;
        vector<int> v;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        bool ok=true;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                if(abs(v[i]-v[i+1]==1)){
                    swap(v[i],v[i+1]);
                }else{
                    ok=false;
                }
            }
        }
        if(ok==false){
            cout<<"No";
        }else{
            cout<<"Yes";
        }
        cout<<endl;
    }
    return 0;
}