#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool mySort(pair<int, int> &p1, pair<int, int> &p2){
    if(p1.second == p2.second){
        return p1.first< p2.first;    
    }
    return p1.second < p2.second;
}


int main(){

    vector<int> v;
    int n;
    cin>>n;
    vector<pair<int,int> > vv;
    int bir;
    int eki;
    for(int i=0;i<n;i++){
        cin>>bir>>eki;
        int x=eki+bir;
        v.push_back(x);
    }
    
    for(int i=0;i<v.size();i++){
        vv.push_back(make_pair(i+1,v[i]));
        //cout<<i+1<<" "<<v[i]<<endl;;
    }
    //sort vv by (x)
    sort(vv.begin(),vv.end(),mySort);
    vector<pair<int,int> > :: iterator it;
    for(it=vv.begin();it!=vv.end();it++){
        cout<<it->first<<" ";
    }
    return 0;
}