#include <bits/stdc++.h>

using namespace std;

int ff(string s){
    int cnt1=0;
    int cnt0=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            cnt0++;
        }else{
            cnt1++;
        }
    }
    if(cnt0>cnt1) return cnt1;
    if(cnt1>cnt0) return cnt0;
    if(cnt1>0 && cnt0==0) return 0;
    if(cnt0>0 && cnt1==0) return 0;
    if(cnt0==cnt1) return 0;
}
// int ss(string s){
//     int k=ff(s);
//     int cnt=0;
//     if(k==0){
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='0') cnt++;
//         }
//     }
// }
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++){
        cout<<ff(v[i])<<endl;
    }
    return 0;
}