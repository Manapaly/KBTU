#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int t;
    cin>>t;
    int cnt=1;
    for(int i=1;i<s.size();i++){
        if(s.at(i)>=48 && s.at(i)<=57 && s.at(i-1)>=48 && s.at(i-1)<=57){
        cnt++;
        }else if(t<=cnt) {
        cout<<"Valid";
        return 0;
        }
        else cnt=1;
    }
    // if(cnt==1 && t=0 )
    // if(t<=cnt) cout<<"Valid";
    // else 
    cout<<"Not valid";
    return 0;
}