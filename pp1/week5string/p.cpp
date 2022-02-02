#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        // s[i]=char(char(s[i])+1);
        // s[s.size()-1]=char(97);
        // cout<<char(s[i]);
        if (char(s[i])==122){
            s[i]='a';
        }else{
            s[i]=char(char(s[i])+1);
        }
        cout<<char(s[i]);
    }
    
    
    return 0;
}