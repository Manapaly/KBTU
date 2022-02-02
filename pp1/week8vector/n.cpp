#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    set <int> s;
    for(int i=0;i<n;i++){
        cin>>x;
        //s.push_back(x);
        s.insert(x);
    }
    
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        if(*it%2==1)
        cout<<*it<<" ";
    }
    
    return 0;
}