#include <bits/stdc++.h>

using namespace std;

bool squarea(int n){
    
        if(int(sqrt(n))*int(sqrt(n))==n) return true;
    
    return false;
}

int main(){
    string s;
    cin>>s;
    stack<int> st;
    for(int i=s.size()-1;i<=0;i--){
        st.push(s[i]-48);
    }
    vector<int> v;
    while(!st.empty()){
        int k=st.top();
        st.pop();
        int m=st.top();
        if(squarea(k*10+m)){
            st.pop();
        }else{
            v.push_back(k);
        }
    }
    
    if(v.size()==0){
        cout<<"Stack is empty";
        return 0;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}