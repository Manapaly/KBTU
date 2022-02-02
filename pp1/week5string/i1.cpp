#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    string x;
    cin>>x;

    int cnts=0;
    int cntx=0;

    for(int i=0;i<s.size();i++){
        cnts+=char(s[i]);
    }
    for(int j=0;j<x.size();j++){
        cntx+=char(x[j]);
    }
    if(cnts==cntx) cout<<"YES";
    else cout<<"NO";


    
    return 0;
}