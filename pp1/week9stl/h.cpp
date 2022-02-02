#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    string soz;
    for(int i=1;i<=n;i++){
        cin>>soz;
        m.insert(make_pair(soz,i));
    }
    
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}