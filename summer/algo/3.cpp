#include <bits/stdc++.h>

using namespace std;
void ff(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int s;
    while(cin>>s){
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
                ff(v);
            }
        }
    }
    // ff(v);
    return 0;
}