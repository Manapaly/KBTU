#include <bits\stdc++.h>

using namespace std;

// string reverss(string s){
//     string t;
//     t="";
//     for(int i=0;i<s.size();i++){
//         t=s[i]+t;
//     }
//     return t;
// }


int main(){
    int n;
    cin>>n;
    int m=0;
    string s;
    s="";
    while(n!=0){
        m=n%2;
        s=char(m+48)+s;
        n=n/2;
    }
    cout<<s<<endl;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==char(48)) cnt++;
    }
    cout<<cnt;
    return 0;
}