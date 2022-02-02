#include <bits/stdc++.h>

using namespace std;

vector<int> erasee(vector<int> v, int h){
    for(int i=h;i<v.size()-1;i++){
        v[i]=v[i+1];
    }
    v[v.size()-1]=99;
    return v;
}
void printv(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> v;
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        int cnt=0;
        int ii=v.size()-2;
        while(ii!=0){
            if(v[ii-1]==0 && v[ii+1]==0){
            //cout<<ii<<endl;
           // v.erase(v.begin()+ii);
            v=erasee(v,ii);
            //printv(v);
            cnt++;
            ii=v.size()-1;
            }
            ii--;
        }
        
        if(cnt%2==0){
        cout << "Bob"<<endl;;
        }else{
        cout<< "Alice"<<endl;
        }
    }
    return 0;
}