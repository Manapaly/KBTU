#include <bits/stdc++.h>

using namespace std;

int ss(string s){
    if (s=="Monday") return 2;
    if (s=="Tuesday") return 3;
    if (s=="Wednesday") return 4;
    if (s=="Thursday") return 5;
    if (s=="Friday") return 6;
    if (s=="Saturday") return 7;
    if (s=="Sanday") return 1;
}

bool mysort(pair<pair<string,string>,int> &p1,pair<pair<string,string>,int> &p2){
    if(p1.second==p2.second){
        return p1.first.first>p2.first.first;
    }
    if(ss(p1.first.second)==ss(p2.first.second)){
        return p1.second>p2.second;
    }
    return ss(p1.first.second)<ss(p2.first.second);
}


int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    map<pair<string,string>,int> m;
    for(int i=0;i<n;i++){
        string typ;
        string day;
        int d;
        cin>>typ>>day>>d;
        m.insert(make_pair(make_pair(typ,day),d));
    }
    int o=0;
    int j=0;
    vector <pair<pair<string,string>,int> > v(m.begin(),m.end());
    sort(v.begin(),v.end(),mysort);
    vector <pair<pair<string,string>,int> > :: iterator it;
    queue<pair<pair<string,int>,int> > q;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
        q.push(make_pair(make_pair(v[i].first.first,ss(v[i].first.second)),v[i].second));
    }
    int cnt=0;
    queue<string> ern;
    while(!q.empty()){
        cnt++;
        pair<int,int> pp=make_pair(q.front().first.second,q.front().second);
        string ww=q.front().first.first;
        int jj=q.front().second;
        q.pop();
        pair<int,int> pp1=make_pair(q.front().first.second,q.front().second);
        int jj1=q.front().second;
        string ww1=q.front().first.first;
        int kk=jj+jj1;
        if(pp.first==pp1.first && kk>10 || pp1.first-1<cnt){
            kk=0;
            ern.push(ww1);
        }else if(pp.first==pp1.first && kk<10){
            q.pop();
        }
    }

    if(ern.size()==0){
        cout<<"YES";
    }else{
        cout<<"NO";
        while(!ern.empty()){
            cout<<ern.front()<<endl;
            ern.pop();
        }
    }
    
    return 0;
}