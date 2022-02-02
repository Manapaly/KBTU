#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    string s;
    int k;
    string a="ADD";
    string p="PRESENT";
    string c="COUNT";
    set <int> w;
    while(n--){
        cin>>s;
        if(s==a){
            cin>>k;
            w.insert(k);
        }
        if(s==p){
            cin>>k;
            if(w.find(k)==w.end()){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }if(s==c){
            cout<<w.size()<<endl;
        }
    }

    return 0;
}