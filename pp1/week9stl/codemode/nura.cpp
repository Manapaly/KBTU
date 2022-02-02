#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<string,vector<int> > &p1,pair<string,vector<int> > &p2){
    return p1.first < p2.first;
}

int suma(vector<int> v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    return sum;
}
int main(){
    int n,k;
    cin>>n;
    string color;
    map<string,vector<int> > m;
    //vector<int> v;
    for(int i=0;i<n;i++){
        cin>>color;
        vector<int> v;
        for(int i=0;i<3;i++){
            cin>>k;
            
            v.push_back(k);
        }
        m.insert(make_pair(color,v));
    }
    //return 0;
    
    map<string,vector<int> > :: iterator it;
    
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<": ";
        if((*it).first.size()%2==1){
            for(int i=0; i<(*it).second.size(); i++){
                if((*it).second[i]-suma((*it).second)/3<=0 ){
                    cout<<0<<" ";
                }else if((*it).second[i]-suma((*it).second)/3>=255){
                    cout<<255<<" ";
                }
                else{
                cout<<(*it).second[i]-suma((*it).second)/3<<" ";
                }
            }
        }else{
            for(int i=0; i<(*it).second.size(); i++){
                if( (*it).second[i]+suma((*it).second)/3<=0){
                    cout<<0<<" ";
                }else if((*it).second[i]+suma((*it).second)/3>=255  ){
                    cout<<255<<" ";
                }
                else{
                cout<<(*it).second[i]+suma((*it).second)/3<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}