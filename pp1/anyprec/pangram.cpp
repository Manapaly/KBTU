#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    set<int> ss;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            ss.insert(s[i]-'0');
        }
    }
    if(ss.size()==10){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}