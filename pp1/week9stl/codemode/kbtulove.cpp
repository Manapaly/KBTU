#include <bits/stdc++.h>

using namespace std;

int ascii(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(int(s[i])%2==0) cnt++;
    }
    return cnt;
}

bool mysort(pair<pair<string,string> , string> &p1, pair<pair<string,string> , string> &p2){
    if(p1.first.first==p2.first.first){
        return p1.first.second<p2.first.second;
    }
    return p1.first.first<p2.first.first;
}

int main(){
    int n;
    cin>>n;
    string k="LOVE!";
    string k1="Nu shto ty bratishka pritih?";
    string s1,s2;
    map<pair<string,string> , string> m;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        if(ascii(s1)==ascii(s2)){
            m.insert(make_pair(make_pair(s1,s2),k));
            //cout<<s1<<" + "<<s2<<" = LOVE!";
        }else{
            m.insert(make_pair(make_pair(s1,s2),k1));
            //cout<<s1<<" + "<<s2<<" = Nu shto ty bratishka pritih?";
        }
        
    }
    vector<pair<pair<string,string> , string> > v(m.begin(),m.end());
    vector<pair<pair<string,string> , string> > :: iterator it;
    sort(v.begin(),v.end(),mysort);

    for(it=v.begin();it!=v.end();it++){
        cout<<(*it).first.first<<" + "<<(*it).first.second<<" = "<<(*it).second;
        cout<<endl;
    }
    return 0;
}