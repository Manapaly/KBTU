#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
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
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    string gg;
    gg=v[0];
    //sort(gg.begin(),gg.end());
    int sum=0;
    for(int i=1;i<v.size();i++){
        int cnt=0;
        while(next_permutation(gg.begin(),gg.end())){
            cnt++;
            if(gg==v[i]){
                if(i>v.size()/2){
                sum=sum+(v.size()-cnt);
                }else{
                sum=sum+cnt;
                }
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}