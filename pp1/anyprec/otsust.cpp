#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<char> lower;
    set<char> upper;
    set<char> san;
    vector<char> low;
    vector<char> up;
    vector<char> ssan;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]>='a' && s[j]<='z') lower.insert(s[j]);
            if(s[j]>='A' && s[j]<='Z') upper.insert(s[j]);
            if(s[j]>='0' && s[j]<='9') san.insert(s[j]);
        }
    }
    set<char> :: iterator it;
    cout<<"Lower case: ";
    for(int i=0;i<26;i++){
        if(find(lower.begin(),lower.end(),char(int('a')+i))==lower.end()) cout<<char(int('a')+i)<<" ";
    }
    cout<<endl;
    cout<<"Upper case: ";
    for(int i=0;i<26;i++){
        if(find(upper.begin(),upper.end(),char(int('A')+i))==upper.end()) cout<<char(int('A')+i)<<" ";
    }
    cout<<endl;
    cout<<"Numbers: ";
    for(int i=0;i<10;i++){
        if(find(san.begin(),san.end(),char(int('0')+i))==san.end()) cout<<char(int('0')+i)<<" ";
    }
    return 0;
}