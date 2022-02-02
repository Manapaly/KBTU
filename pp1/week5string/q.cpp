#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    string t;
    cin>>t;

    if(t.size()%s.size()!=0){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<t.size()/s.size()-1;i++){
        s+=s;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
           cout<<"NO"; 
           return 0;
        } 
    }
    cout<<"YES";
    return 0;
}
