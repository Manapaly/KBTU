#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int n,x,k;
    cin>>n;
   
    set<int> :: iterator it;
    string st;
    for(int i=0;i<n;i++){
        set<int> s;
        cin>>x;
        for(int i=0;i<x;i++){
            cin>>st;
            if(st=="Insert"){
                cin>>k;
                s.insert(k);
            }else if(st=="Print"){
                for(it=s.begin();it!=s.end();it++){
                    cout<<*it<<" ";
                }
                cout<<endl;
            }else if(st=="Delete"){
                cin>>k;
                if(s.erase(k)){
                cout<<"Deleted"<<endl;
                }else{
                    cout<<"Doesnt exist"<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}