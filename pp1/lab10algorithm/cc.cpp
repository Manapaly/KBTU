#include <bits/stdc++.h>

using namespace std;

bool square(char c,char k){
    if ((sqrt((c-'0')*10+(k-'0')))*sqrt((c-'0')*10+(k-'0'))==(c-'0')*10+(k-'0')) return true;
    else return false;
}

int main(){
    string s;
    cin>>s;
    queue <char> q;
    for(int i=0;i<s.size();i++){
        q.push(s[i]);
    }
    int o=q.size();
    int cnt=0;
    while(!q.empty()){
        char l=q.front();
        q.pop();
        char t=q.front();
        if(square(t,l)){
            q.pop();
        }else{
            q.push(l);
            cnt++;
        }
        if(cnt==o){
            break;
        }else if(q.size()==0){
            cout<<"Stack is empty";
            return 0;
        }
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    return 0;
}