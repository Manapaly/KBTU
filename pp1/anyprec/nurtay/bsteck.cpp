#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    stack<int> st;
    vector<string> v;
    
    while(cin>>s){
        if(s=="size") cout<<"ok";
        if(s=="push"){
            int x;
            cin>>x;
            st.push(x);
            cout<<st.top();
        }
    }
    return 0;
}