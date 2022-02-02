#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<s.size()-1;i++){
        if(s[i-1]=='r' && s[i]=='g' && s[i+1]=='b'){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}