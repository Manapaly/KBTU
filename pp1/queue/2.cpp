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
    
    for(int i=0;i<s.size();i++){
        q.push(s[i]);
    }
    while(!cr(p.front())){
        
    }
    cout<<q.size()<<" "<<l;
    return 0;
}