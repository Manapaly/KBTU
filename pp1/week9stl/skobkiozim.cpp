#include <iostream>
#include <stack>

using namespace std;

int main(){
    
    char x;

    stack<int> st;
    while(cin>>x){
        if(x!='(' || x!='{' || x!='['){
            cout<<"NO";
            return 0;
        }
        if(x=='(' || x=='{' || x=='['){
            st.push(x);
        }else{
            if(x)
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}