#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    if(s.size()%n!=0){
        cout<<"look at the road!";
        return 0;
    }
    vector<string> v;
    string st="";
    int k=0;

    for(int i=0;i<s.size()/n;i++){
        string st="";
        for(int j=k;j<s.size()/n+k;j++){
        st=st+s[j];
        }
        k=s.size()/n+k;
        v.push_back(st);
    }
    string gg;
    gg=v[0];
 
    int sum=0;
    vector<string> vv;
    vv.push_back(gg);
    while(next_permutation(gg.begin(),gg.end())){
        vv.push_back(gg);
    }

    for(int i=1;i<v.size();i++){
        for(int j=0;j<vv.size();j++){
            if(v[i]==vv[j]){
                sum=sum+(vv.size()-j);
                break;
            }
        }
    }
    for(int i=0;i<v.size();i++){
            if(find(vv.begin(),vv.end(),v[i])==vv.end()){
                cout<<"look at the road!";
                return 0;
            }
    }
    cout<<sum;
    
    return 0;
}