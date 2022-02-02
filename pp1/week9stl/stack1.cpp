#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x;

    stack<int> st;
    for(int i=0;i<n;i++){
        cin>>x;
        st.push(x);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}