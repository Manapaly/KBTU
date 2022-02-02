#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x  ;
    string name;
    double ball;
    pair<string, double> m;
    queue<pair<string, double> >q;
    for(int i=0;i<n;i++){
        cin>>name>>ball;
        m=make_pair(name,ball);
        q.push(make_pair(name,ball));
    }
    queue<string> otti;
    while(!q.empty()){
        pair<string, double> p=q.front();
        q.pop();
        pair<string, double> pp=q.front();
        if(p.second>pp.second){
            otti.push(p.first);
        }else{
            q.push(p);
        }
        if(otti.size()==x){
            while(!otti.empty()){
                cout<<otti.front()<<endl;
                otti.pop();
            }
            return 0;
        }
    }
    return 0;
    }
   