#include <iostream>
#include <queue>


using namespace std;

bool cr(char c){
    if(c =='a' || c=='e' || c=='u' || c=='i' || c=='o') return true;
    else return false;
}

int main(){
    string s;
    cin>>s;
    queue <char> q;
    char l;
    for(int i=0;i<s.size();i++){
        if(cr(s[i])!=true) q.push(s[i]);
        if(cr(s[i])==true) l=s[i];
    }
    cout<<q.size()<<" "<<l;
    return 0;
}