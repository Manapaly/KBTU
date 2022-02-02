#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<string> kringe;
    vector<string> mkringe;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        kringe.push_back(name);
    }
    for(int i=0;i<m;i++){
        string mname;
        cin>>mname;
        mkringe.push_back(mname);
    }
    int cnt=0;
//     string s1 = "Hello";
//     string s2 = "el";
//     if(strstr(s1.c_str(),s2.c_str()))
//     {
//    cout << " S1 Contains S2";
//     }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(strstr(kringe[i].c_str(),mkringe[j].c_str()) || strstr(mkringe[j].c_str(),kringe[i].c_str())){
            cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}