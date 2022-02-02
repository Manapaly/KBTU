#include <bits/stdc++.h>

using namespace std;

double ff(pair<double,double> &p){
    return p.first+p.second/60;
}
double summ(vector<double> &v){
    double sumo=0;
    for(int i=0;i<v.size();i++){
        sumo=sumo+v[i];
    }
    return sumo;
}
double gg(double x){
    if(x<0) return x+24;
    else return x;
}
int main(){
    int n;
    cin>>n;

    vector<pair<pair<double,double>,pair<double,double> > > v;
    for(int i=0;i<n;i++){
        double x,y,w,z;
        cin>>x>>y>>w>>z;
        v.push_back(make_pair(make_pair(x,y),make_pair(w,z)));
    }
    vector<double> vv;
  
    for(int i=0;i<v.size();i++){
        double k=gg(ff(v[i].second)-ff(v[i].first));
        vv.push_back(k);
    }
    double g=summ(vv);
    double ad=g*60;
    while(ad>=1440){
        ad=ad-1440;
    }
    cout<<ad;
    return 0;
}