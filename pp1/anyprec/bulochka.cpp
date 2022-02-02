#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int cnt=0;
    if(m['p']>=1 || m['P']>=1) cnt++;
    if(m['a']>=1 || m['A']>=1) cnt++;
    if(m['c']>=1 || m['C']>=1) cnt++;
    if(m['i']>=2 || m['I']>=2) cnt++;
    if(m['f']>=1 || m['F']>=1) cnt++;
    if(m['y']>=1 || m['Y']>=1) cnt++;
    if(m['w']>=1 || m['W']>=1) cnt++;
    if(m['n']>=1 || m['n']>=1) cnt++;
    if(m['e']>=1 || m['E']>=1) cnt++;
    if(cnt==9) cout<<"Bubu";
    else cout<<"Wine by";
}