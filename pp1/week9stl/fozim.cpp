#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }else if(st.empty() && s[i]==')'){
            cout<<"NO"; 
            return 0;
        }else{
            st.pop();
        }
    }
    if(st.size()==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}