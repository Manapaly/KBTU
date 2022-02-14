#include <bits/stdc++.h>

using namespace std;
vector<int> vv;
vector<int> ret(vector<int> v, int h){
    vector<int> vv;
    vv.push_back(v[h]);
    for(int i=1;i<=h;i++){
        v[i+1]=v[i];
    }
    return vv;
}
void printv(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> fff(vector<int> v,int ii,int k){
    vv.push_back(ii);
    for(int i=0;i<k;i++){
        vv.push_back(v[i]);
    }
    int kk=k+1;
    for(int i=kk;i<v.size();i++){
        vv.push_back(v[i]);
    }
    return vv;
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
        int l=0;
        int cnt=0;
        for(int i=0;i<v.size()-2;i++){
            if(v[i]==0 && v[i+2]==0){
                int k=v[i+1];
                int q=i+1;
                for(int j=q;j>0;j--){
                    v[j]=v[j-1];
                }
                v[0]=99;
                //l++;
                //printv(v);
                cnt++;
                i=0;
            }
        }
        
        if(cnt%2==0){
        cout << "Bob"<<endl;;
        }else{
        cout<< "Alice"<<endl;
        }
    }
    return 0;
}