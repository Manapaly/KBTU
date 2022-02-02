#include <bits/stdc++.h>

using namespace std;

int main(){
    int cnt=0;
    int l;
    int x;
    set <int> v;
    for(int i=0;i<v.size();i++){
        cin>>x;
        v.insert(x);
    }
    set <int> k;
    for(int j=0;j<k.size();j++){
        cin>>l;
        k.insert(l);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<k.size();j++){
        if(x==l) cnt++;
        }
    }
    cout<<cnt;
    return 0;
}