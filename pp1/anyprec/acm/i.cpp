#include <bits/stdc++.h>

using namespace std;

int ff(float n, int k){
    string s=to_string(n);
    int cnt=0;
    for(int i=2;i<s.size();i++){
        if(s[i]=='0'){
            cnt++;
        }else{
            break;
        }
    }
    return cnt;
}

int main(){
    double n;
    cin>>n;
    cout<<to_string(n);
    // int k;
    // cin>>k;
    // cout<<ff(n,k);
    return 0;
}