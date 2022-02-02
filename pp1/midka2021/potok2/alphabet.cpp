#include <bits\stdc++.h>

using namespace std;

string sort(string s){
    
    for(int i=0;i<s.size();i++){
        for(int k=i;k<s.size();k++){
            if(s.at(k)<s.at(i)){
                swap(s[k],s[i]);
            }
        }
    }
    return s;
}

int main(){
    string d="abcdefghijklmnopqrstuvwxyz";
    string s;
    cin>>s;
    if(sort(s)==d) cout<<"YES";
    else cout<<"NO";
    return 0;
}