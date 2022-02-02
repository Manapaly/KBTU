#include <bits/stdc++.h>

using namespace std;
int cnt;
int ff(vector<char> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]) cnt++;
    }
    return cnt;
}
bool truestring(vector<char> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]) return false;
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    vector<char> v;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        v.push_back(c);
    }
    if(truestring(v)==true){
        cout<<0;
        return 0;
    }
    cout<<ff(v);
    return 0;
}