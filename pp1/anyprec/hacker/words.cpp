#include <bits/stdc++.h>

using namespace std;

#define float double

char tolowerr(char c){
    return tolower(c);
}

string tolow(string s){
    string ss="";
    for(int i=0;i<s.size();i++){
        ss=ss+tolowerr(char(s[i]));
    }
    return ss;
}

bool mysort(pair<string,double> &p1, pair<string,double> &p2){
    // if(p1.second==p2.second){
    //     return p1.first<p2.first;
    // }
    return p1.second>p2.second;
}

int main(){
    
    string s;
    map<string,double> m;
   
    float cnt=0;
    while(cin>>s){
        s=tolow(s);
        cnt++;
        m[s]++;
    }
    vector<pair<string,double> > v(m.begin(),m.end());
    sort(v.begin(),v.end(),mysort);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" : "<<float((v[i].second*100)/cnt)<<"%"<<endl;
    }
    return 0;
}