#include <bits/stdc++.h>

using namespace std;
int summ(vector<int> v){
    int summ=0;
    for(int i=0;i<v.size();i++){
        summ=summ+v[i];
    }
    return summ;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> dar;
    vector<int> dan;
    for(int i=0;i<v.size();i++){
        dar.push_back(v[i]);
    }
    for(int i=v.size()-1;i>=0;i--){
        dan.push_back(v[i]);
    }
    sort(v.begin(),v.end());
    vector<int> e=v;

    //vector<int> e=sort(v.begin(),v.end());
    for(int i=0;i<e.size();i++){
        cout<<e[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<dar.size();i++){
        cout<<dar[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<dan.size();i++){
        cout<<dan[i]<<" ";
    }
    return 0;
}