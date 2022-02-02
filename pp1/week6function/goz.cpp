#include <iostream>
#include <bits\stdc++.h>

using namespace std;

void vowel(string s){
    string res="";
    for(size_t i=0;i<s.size();i++){
    if(s.at(i)=97 ){
        res=res+s[i];
        break;
    }
    if(s.at(i)=101){
        res=res+s[i];
        break;
    }

    if(s.at(i)=105){
        res=res+s[i];
        break;
    }
    if(s.at(i)=111){
        res=res+s[i];
        break;
    }
    if(s.at(i)=117 ){
        res=res+s[i];
        break;
    }
    if(s.at(i)=65 ){
        res=res+s[i];
       break;
    }

    if(s.at(i)=69 ){
        res=res+s[i];
        break;
    }
    if(s.at(i)=73 ){
        res=res+s[i];
        break;
    }
    if(s.at(i)=79 ){
        res=res+s[i];
        break;
    }
    if(s.at(i)=85 ){
        res=res+s[i];
        break;
    }
    }
    cout<<res;
}

int main(){
    string s;
    getline(cin, s);

    vowel(s);


    return 0;
}