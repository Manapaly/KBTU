#include <bits/stdc++.h>

using namespace std;
string inttostring(int n){
    string gg="";
    while(n!=0){
        gg=char(n%10+'0')+gg;
        n=n/10;
    }
    return gg;
}
string sumofstring(string s){
    int ccc=0;
    for(int i=0;i<s.size();i++){
        ccc=ccc+int(s[i]-'0');
    }
    return inttostring(ccc);
}


int main(){
    string s;
    cin>>s;
    int cnt=1;
    if(s.size()==1){
        cout<<s<<" "<<0;
        return 0;
    }
    string g=sumofstring(s);
    if(g.size()==1){
        cout<<g<<" "<<1;
        return 0;
    }else{
        while(g.size()!=1){
            cnt++;
            g=sumofstring(g);
        }
    }
    cout<<g<<" "<<cnt;
    return 0;
}