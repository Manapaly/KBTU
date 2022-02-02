#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> h;
    vector<int> p;
    map<int,int> m;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
        v.push_back(x);
    }
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==1){
            h.push_back((*it).first);
        }else{
            p.push_back((*it).first);
        }
    }
    if(h.size()==0){
        cout<<"Zvonite mamam, u vas retake"<<endl;
    }else{
        cout<<"}{orishie : ";
        for(int i=0;i<h.size();i++){
            cout<<h[i]<<" ";
        }
        cout<<endl;
    }
    if(p.size()==0){
        cout<<"Molodcy"<<endl;
    }else{
        cout<<"Plo}{ie : ";
        for(int i=0;i<p.size();i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}