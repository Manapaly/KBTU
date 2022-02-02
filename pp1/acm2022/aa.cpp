#include <bits/stdc++.h>

using namespace std;
vector<vector<int> > vvv;
vector<int> va;
int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}
void ff(int n,int k){
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size()/2;i++){
        vector<int> dd;
        for(int j=i;j<i+k;j++){
            dd.push_back(v[j]);
        }
        vvv.push_back(dd);
    }
}
int maxi(vector<int> v){
    int maa=-10000000;
    for(int i=0;i<v.size();i++){
        if(v[i]>maa){
            maa=v[i];
        }
    }
    return maa;
}
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        va.push_back(x);
    }
    
    int a=factorial(n)/(factorial(k)*factorial(n-k));
    ff(n,k);
    for(int i=0;i<vvv.size();i++){
        for(int j=0;j<vvv[i].size();j++){
            cout<<vvv[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> eq;
    for(int i=0;i<vvv.size();i++){
        int u=2047;
        for(int j=0;j<vvv[i].size();j++){
            //cout<<vvv[i][j]<<" ";
            u=u & va[vvv[i][j]-1];
            cout<<va[vvv[i][j]-1]<<" ";
        }
        eq.push_back(u);
        cout<<endl;
    }
    int ddd=maxi(eq);
    int cnt=0;
    for(int i=0;i<eq.size();i++){
        cout<<eq[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<eq.size();i++){
        if(eq[i]==ddd){
            cnt++;
        }
    }
    cout<<ddd<<endl<<cnt;
    return 0;
}