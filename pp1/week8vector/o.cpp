#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    string x;
    cin>>x;
    set <char> s;
    for(int i=0;i<x.size();i++){ 
        if(x[i]>='A' && x[i]<='Z')
        x[i]=char(x.at(i)+32);
    }
    for(int i=0;i<x.size();i++){
        s.insert(x[i]);
    }
    cout<<s.size()<<endl;
    
    set <char>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}