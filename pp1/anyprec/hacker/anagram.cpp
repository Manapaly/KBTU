#include <bits/stdc++.h>

using namespace std;

bool anagram(string s1,string s2){
    vector<char> v1;
    vector<char> v2;
    for(int i=0;i<s1.size();i++){
        v1.push_back(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
        v2.push_back(s2[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    string ss1="";
    string ss2="";
    for(int i=0;i<v1.size();i++){
        ss1=ss1+v1[i];
    }
    for(int i=0;i<v2.size();i++){
        ss2=ss2+v2[i];
    }
    if(ss1==ss2) return true;
    else return false;
}

int main(){
    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // if(anagram(s1,s2)) cout<<"yes";
    // else cout<<"no";
    vector<string> v;
    string s;
    while(cin>>s){
        v.push_back(s);
    }
    vector<string> v1;
    string osnovnoi=v[v.size()-1];
    for(int i=0;i<v.size()-1;i++){
        v1.push_back(v[i]);
    }
    set<string> st;
    for(int i=0;i<v1.size();i++){
        if(anagram(v1[i],osnovnoi)==false){
            st.insert(v1[i]);
        }
    }
    set<string> :: iterator it;
    vector<string> vvv;
    for(it=st.begin();it!=st.end();it++){
        vvv.push_back(*it);
    }
    if(vvv.size()==0){
        cout<<"There is none left";
    }else{
        for(int i=0;i<vvv.size();i++){
            cout<<vvv[i]<<" ";
        }
    }
    return 0;
}