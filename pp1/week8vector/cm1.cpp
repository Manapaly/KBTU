#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    // int n;
    // cin>>n;
    set <string> s;
    string x;

    while(cin>>x){
    //cin>>x;
    s.insert(x);
    }
   
    cout<<s.size();
    return 0;
}