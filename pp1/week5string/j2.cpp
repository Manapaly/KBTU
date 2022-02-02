#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin>>s;

    int ss=0;
    int ss2=0;
    int n;
    if(s.size()%2==0){
    n=s.size()/2;
    
    for(int i=0;i<n;i++){
        ss=ss+char(s[i]);
    }
    //cout<<ss;
    for(int i=n+1;i<s.size();i++){
        ss2=ss2+char(s[i]);
    }
    if(ss-ss2>=97 && ss-ss2<=122) cout<<"YES";
    else cout<<"NO";
    }


    if(s.size()%2==1){
    n=s.size()/2;
    
    for(int i=0;i<=n;i++){
        ss=ss+char(s[i]);
    }
    //cout<<ss;
    for(int i=n+1;i<s.size();i++){
        ss2=ss2+char(s[i]);
    }
    if(ss-ss2>=97 && ss-ss2<=122) cout<<"YES";
    else cout<<"NO";
    }

    return 0;
}