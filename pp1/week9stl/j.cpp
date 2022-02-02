#include <iostream>
#include <map>

using namespace std;


int main(){
    map<string,int> m;
    int n;
    cin>>n;
    string soz;
    int epizod;
    for(int i=0;i<n;i++){
        cin>>soz>>epizod;
        m[soz]+=epizod;
    }
    map<string, int> ::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}