#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

bool mySort(pair<pair<string, string>  ,int> &p1, pair<pair<string, string> ,int> &p2){
    if(p1.second == p2.second){
        return p1.first< p2.first;    
    }
    return p1.second < p2.second;
}

int sumofascii(string s){
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum=sum+int(s[i]);
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    map< pair<string, string>,int> m;
    vector<pair<pair<string, string>,int> > v;
    string name;
    string soname;
    int k;
    
    for(int i=0;i<n;i++){
        cin>>name>>soname;
        k=abs(sumofascii(name)-sumofascii(soname));
        v.push_back(make_pair(make_pair(name,soname), k));
    }

    map< pair<string, string>,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" " << (*it).second<<endl;
    }
    return 0;
}