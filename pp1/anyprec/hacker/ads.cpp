#include <bits/stdc++.h>

using namespace std;

int findmax(vector<int> v){
    int k=-2000000;
    for(int i=0;i<v.size();i++){
        if(v[i]>k){
            k=v[i];
        }
    }
    return k;
}

int findmin(vector<int> v){
    int k=20000000;
    for(int i=0;i<v.size();i++){
        if(v[i]<k){
            k=v[i];
        }
    }
    return k;
}
int summ(vector<int> v){
    int sum=0;;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    return sum;
}
vector kickone(vector<int> v,int k){
    vector<int> g;
    for(int i=0;i<v.size();i++){
        if(i!=k){
            g.push_back(v[i]);
        }
    }
    return g;
}
vector kickpart(vector<int> v,int n,int k){
    vector <int> g;
    for(int i=0;i<n;i++){
        g.push_back(v[i]);
    }
    for(int i=k+1;i<v.size();i++){
        g.push_back(v[i]);
    }
}
int howmany(vector<int> v,int l){
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==l) cnt++;
    }
    return cnt;
}
vector makebigger(vector<int> v){
    vector<int> g;
    for(int i=0;i<v.size();i++){
        g.push_back(v[i]*2);
    }
    return g;
}
vector ozin(vector<int> v){

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    vector<string> ss;
    for(int i=0;i<k;i++){
        string s;
        cin>>s;
        ss.push_back(s);
    }
    cout<<"initial ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<ss.size();i++){
        if(ss[i]=="find_max"){
            cout<<i+1<<") ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            cout<<"max - "<<findmax(v);
            cout<<endl;
        }else if(ss[i]=="find_min"){
            cout<<i+1<<") ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            cout<<"min - "<<findmin(v);
            cout<<endl;
        }else if(ss[i]=="sum"){
            cout<<i+1<<") ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            cout<<"sum - "<<summ(v);
            cout<<endl;
        }else if(ss[i]=="kick all"){
            cout<<"ok";
        }else if(ss[i]=="reverse"){
            reverse(v.begin(),v.end());
            cout<<i+1<<") ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }else if(ss[i]=="sort"){
            sort(v.begin(),v.end());
            cout<<i+1<<") ";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}