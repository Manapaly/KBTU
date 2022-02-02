#include <bits/stdc++.h>

using namespace std;

float dd(string s){
    if(s=="A") return 4.0;
    if(s=="A-") return 3.67;
    if(s=="B+") return 3.33;
    if(s=="B") return 3.0;
    if(s=="B-") return 2.67;
    if(s=="C+") return 2.33;
    if(s=="C") return 2.00;
    if(s=="C-") return 1.67;
    if(s=="D+") return 1.33;
    if(s=="D") return 1.0;
    if(s=="F") return 0.0;
}

int main(){
    int n;
    cin>>n;
    map<string,double> m;
    for(int i=0;i<n;i++){
        string name;
        double kol;
        double total=0;
        double totalball=0;
        cin>>name>>kol;
        for(int i=0;i<kol;i++){
            double oc;
            string cc;
            cin>>oc>>cc;
            totalball=totalball+double(oc*dd(cc));
            total=total+oc;

        }
        double gag=totalball/total;
        m.insert(make_pair(name,gag));
    }
    map<string,double> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" : "<<fixed<<setprecision(2)<<double((*it).second)<<endl; 
    }
    return 0;

}