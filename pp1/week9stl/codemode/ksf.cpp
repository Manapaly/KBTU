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
    queue <pair<string,int> > qq;
    while(q.size()!=1){
        pair <string,int> j=q.front();
        q.pop();
        if(j.second<q.front().second  ){
            qq.push(j);
        }
    }
    
    if(q.front().second<qq.front().second){
       qq.push(q.front());
    }
    if(qq.size()!=n){
    cout<<qq.size()<<endl;
    while(!qq.empty()){
        cout<<qq.front().first<<endl;
        qq.pop();
    }
    }
    else cout<<0;
    return 0;
}