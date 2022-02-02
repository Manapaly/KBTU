#include <bits/stdc++.h>

using namespace std;

bool qq(string s1,string s2){
    if(s1==s2) return true;
    return false;
}

string ww(string s){
    string yr="";
    if(s[s.size()-1]==' '){
    for(int i=0;i<s.size()-1;i++){
        yr=yr+s[i];
    }
    }else{
        for(int i=0;i<s.size()-1;i++){
        yr=yr+s[i];
    }
    }
    return yr;
}

int main(){
    int n;
    cin>>n;
    map<string,vector<string> > m;
    for(int i=0;i<=n;i++){
        string k;
        getline(cin,k);
        vector <string> gg;
        string se="";
        for(int j=0;j<=k.size();j++){
            if(k[j]!=' ' || j!=k.size()){
                se=se+k[j];
            }
            if(k[j]==' ' || j==k.size()){
                gg.push_back(se);
                se="";
            }
        }
        for(int y=0;y<gg.size();y++){
            m[gg[0]].push_back(gg[y]);
        }
    }
    map<string,vector<string> > :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).first.size()!=0){
        cout<<ww((*it).first)<<": ";
        for(int e=1;e<(*it).second.size()-1;e++){
            if(!qq(ww((*it).first),ww((*it).second[e])))
            cout<<ww((*it).second[e])<<", ";
        }
        cout<<ww((*it).second[(*it).second.size()-1]);
        cout<<endl;
        }
    }
    return 0;
}
