#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    string nomer;
    for(int i=0;i<n;i++){
        cin>>nomer;
        m[nomer]++;
    }
    int cnt=0;
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second==3) cnt++;
    }
    cout<<cnt;
    return 0;
}