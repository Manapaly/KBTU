#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int k,l,m;
    vector<int> v;
    vector<int> vv;
    
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cin>>l>>m;
    for(int i=0;i<v.size();i++){
        if(v[i]%l==0 && v[i]%m!=0) vv.push_back(v[i]);
    }
    if(vv.size()==0){
        cout<<"-1";
    }else{
        for(int i=0;i<vv.size();i++){
            cout<<vv[i]<<endl;
        }
    }
  
    return 0;
}