#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string name;
    int minute;
    queue <pair<string,int> > q;
    for(int i=0;i<n;i++){
        cin>>name>>minute;
        q.push(make_pair(name,minute));
    }
    queue <string> qq;
    int cnt=0;
    while(q.size()!=-1){
        if(q.front().second>=cnt){
            qq.push(p.first);
        }
        cnt++;
        q.pop();
    }
    
    if(qq.size()!=n){
    cout<<qq.size()<<endl;
    while(!qq.empty()){
        cout<<qq.front()<<endl;
        qq.pop();
    }
    }
    else cout<<0;
    return 0;
}