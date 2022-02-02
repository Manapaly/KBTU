#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]==')'){
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        char c=st.top();
        st.pop();
    }
    return 0;
}