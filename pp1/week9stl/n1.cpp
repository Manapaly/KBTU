#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        int c;
        for(int j=i+1;j<v.size();j++){
            c=v[i]^v[j];
            if(find(v.begin(), v.end(), c) != v.end()) cnt++;
        }
    }
    // int cnt=0;
    // for(int i=0;i<v.size();i++){
    //     vector <int> :: iterator it;
    //     it=find(v2.begin(),v2.end(),v[i]);
    //     if(it!=v2.end()){
    //         cnt++;
    //     }
    // }
    
    cout<<cnt<<endl;
    return 0;
}