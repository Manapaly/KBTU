#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sumof(string s){
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum=sum+(s[i]-48)
    }
    return sum;
}

int main(){
    // m.insert(make_pair("orange",40));
    // m.insert(make_pair("orange",155));
    // m.insert(make_pair("orange",404));
    // m["apple"]=55;
    // m["apple"]=20;
    // m["apple"]=10;
    int n;
    cin>>n;
    string name;
    for(int i=0;i<n;i++){
        cin>>name;
    }
    map<string, pair<vector<int>, int> > m;
    map<string, pair<vector<int>, int> > :: iterator it;
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;)
    }
    return 0;
}