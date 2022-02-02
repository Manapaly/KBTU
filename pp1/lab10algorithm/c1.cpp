#include <bits/stdc++.h>

using namespace std;

bool squarea(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(i*i==n) return true;
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]-48);
    }
    //cout<<squarea(11)<<" "<<squarea(16)<<" "<<squarea(49);
    //return 0;
    for(int i=0;i<v.size()-1;i++){
        if(squarea(v[i]*10+v[i+1])){
            v.erase(v.begin()+i,v.begin()+i+2);
            i++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}