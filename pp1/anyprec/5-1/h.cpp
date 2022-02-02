#include <bits/stdc++.h>

using namespace std;

// vector<string> ff(vector<string> v1, vector<string> v2){
//     vector<string> b;
//     map<string,int> m;
//     for(int i=0;i<v1.size();i++){
//         m[v1[i]]++;
//     }
//     for(int i=0;i<v3.size();i++){
//         m[v2[i]]++;
//     }
//     map<string,int> ::iterator it;
//     for(it=m.begin();it!=m.end();it++){
//         if((*it).second==1) b.push_back((*it).first);
//     }
//     return b;
// }
// vector<string> ff1(vector<string> v1, vector<string> v2){
//     vector<string> b;
//     map<string,int> m;
//     for(int i=0;i<v1.size();i++){
//         m[v1[i]]++;
//     }
//     for(int i=0;i<v3.size();i++){
//         m[v2[i]]++;
//     }
//     map<string,int> ::iterator it;
//     for(it=m.begin();it!=m.end();it++){
//         if((*it).second>1) b.push_back((*it).first);
//     }
//     return b;
// }
int main(){
    vector<string> v1;
    vector<string> v2;
    vector<string> v3;
    int n,m,k;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v1.push_back(s);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s;
        v2.push_back(s);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>s;
        v3.push_back(s);
    }
    vector<string> b1;
    vector<string> b2;
    vector<string> b3;
    for(int i=0;i<v1.size();i++){
        if(find(v2.begin(),v2.end(),v1[i])==v2.end()){
            b1.push_back(v1[i]);
        }
    }
    for(int i=0;i<v2.size();i++){
        if(find(v1.begin(),v1.end(),v2[i])==v1.end()){
            b2.push_back(v2[i]);
        }
    }
    for(int i=0;i<v3.size();i++){
        if(find(v1.begin(),v1.end(),v3[i])!=v1.end() && find(v2.begin(),v2.end(),v3[i])!=v2.end() ){
            b3.push_back(v3[i]);
        }
    }
    if(b1.size()==0){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<b1.size();i++){
        cout<<b1[i]<<" ";
        }
        cout<<endl;
    }
    if(b2.size()==0){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<b2.size();i++){
        cout<<b2[i]<<" ";
        }
        cout<<endl;
    }if(b3.size()==0){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<b3.size();i++){
        cout<<b3[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}