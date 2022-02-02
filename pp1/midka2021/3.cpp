#include <bits/stdc++.h>

using namespace std;

bool polindrome(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    string k="";
    while(n!=0){
        k=char(n%2+'0')+k;
        n=n/2;
    }
    int l=k.size();
    while(l!=8){
        k='0'+k;
        l++;
    }
    
    if(polindrome(k)){
        cout<<"It works!";
        return 0;
    }
    cout<<"Sad";
    return 0;
}