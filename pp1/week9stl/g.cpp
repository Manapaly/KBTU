#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    
    for(int i=0;i<s.size();i++){

        if(s[i]=='0'){
            st.push(s[i]);
        }else{
            if(!st.empty() && st.top()=='1'){
                st.pop();
            }else{
                st.push('1');
            }
        }
    }
    string ses="";
    while(!st.empty()){
        ses=st.top()+ses;
        st.pop();
    }
    cout<<ses;
    return 0;
}