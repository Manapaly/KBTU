#include <bits/stdc++.h>

using namespace std;

int sizeoff(int a){
    int cnt=0;
    while(a!=0){
        cnt++;
        a=a/10;
    }
    return cnt;
}
int ss(int k){
    if(k==1) return 1;
    if(k==2) return 10;
    if(k==3) return 100;
    if(k==4) return 1000;
    if(k==5) return 10000;
    if(k==6) return 100000;
    if(k==7) return 1000000;
    if(k==8) return 10000000;
    if(k==9) return 100000000;
    if(k==10) return 100000000;
    if(k==11) return 1000000000;
}
int tagy(int a, int b){
    string s1=to_string(a);
    string s2=to_string(b);
    int cnt=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            cnt++;
        }
    }
    return cnt;
}
int mini(vector<int> v){
    int minii=1000000;
    for(int i=0;i<v.size();i++){
        if(v[i]<minii){
            minii=v[i];
        }
    }
    return minii;
}
int ff(int a){
    vector<int> v;
    for(int i=ss(sizeoff(a));i<10*ss(sizeoff(a));i++){
        if(i%7==0){
            v.push_back(i);
        }
    }
    vector<int> vv;
    for(int i=0;i<v.size();i++){
        vv.push_back(tagy(a,v[i]));
    }
    int tt=mini(vv);
    int rr;
    for(int i=0;i<vv.size();i++){
        if(vv[i]==tt){
            rr=i;
            break;
        }
    }
    return v[rr];
}

int main(){
    int n;
    cin>>n;
    //cout<<tagy(354,555);
    //cout<<sizeoff(n);
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]%7==0){
            cout<<v[i]<<endl;
        }else{
            cout<<ff(v[i])<<endl;
        }
    }
    // int a; cin>>a;
    // vector<int> v;
    // for(int i=ss(sizeoff(a));i<10*ss(sizeoff(a));i++){
    //     if(i%7==0){
    //         v.push_back(i);
    //     }
    // }
    // vector<int> vv;
    // for(int i=0;i<v.size();i++){
    //     vv.push_back(tagy(a,v[i]));
    // }
    // for(int i=0;i<vv.size();i++){
    //     cout<<vv[i]<<" ";
    // }
    // cout<<endl<<mini(vv);
    return 0;
}