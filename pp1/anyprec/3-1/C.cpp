#include <bits/stdc++.h>

using namespace std;

string ss(string s){
    string st="";
    if (s[s.size()-1]==','){
        for(int i=0;i<s.size()-1;i++){
            st=st+s[i];
        }
        return st;
    }
    return s;
}
char tolowerr(char c){
    return tolower(c);
}
string mukash(string s){
    string gr="";
    for(int i=0;i<s.size();i++){
        gr=gr+tolowerr(s[i]);
    }
    return gr;
}
int era(string s){
    map<char,int> m;
    set<char> v;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
        // if(m[s[i]]>1){
        //     v.insert(s[i]);
        // }
    }
    map<char,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>1){
            v.insert((*it).first);
        }
    }
    return v.size();
}
// bool mysort(pair<string,int> &p1, pair<string,int> &p2){
//     return p1.second>p2.second;
// }
int maxi(vector<int> v){
    int maxo=-20000;
    for(int i=0;i<v.size();i++){
        if(v[i]>maxo){
            maxo=v[i];
        }
    }
    return maxo;
}
string fec(string s){
    string gg="";
    for(int i=0;i<s.size();i++){
        gg=s[i]+gg;
    }
    return gg;
}
int main(){
    string s;
    cin>>s;
    vector<string> v;
    int k=0;
    string st="";
    for(int i=k;i<s.size();i++){
        st=st+s[i];
        if(s[i]==',' || i==s.size()-1){
            v.push_back(mukash(ss(st)));
            k=i;
            st="";
            //break;
        }
    }
    map<string,int> m;
    vector<pair<string,int> > vv;
    for(int i=0;i<v.size();i++){
        if(era(v[i])!=0){
        m.insert(make_pair(v[i],era(v[i])));
        }
        vv.push_back(make_pair(v[i],era(v[i])));
    }
    
    vector<int> e;
    for(int i=0;i<vv.size();i++){
        e.push_back(vv[i].second);
    }
    int eee=maxi(e);
    
    if(m.size()==0){
        cout<<"-1";
        return 0;
    }
    int lox;
    for(int i=0;i<e.size();i++){
        if(e[i]==eee){
            lox=i;
            break;
        }

    }
   
    vector<int> mm;
    
    cout<<fec(vv[lox].first);
    return 0;
}