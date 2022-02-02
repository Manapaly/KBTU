#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        stack<int> st;
        int kk;
        cin>>kk;
        for(int i=0;i<kk;i++){
            int x;
            cin>>x;
            st.push(x);
        }
        int l=0;
        int cnt=0;
        while(!st.empty()){
            if(st.size()<3){
                break;
            }
            int a1=st.top();
            st.pop();
            int a2=st.top();
            st.pop();
            int a3=st.top();
            st.pop();
            if(a1==0 && a3==0){
                st.push(a3);
                st.push(a1);
                cnt++;
            }else{
                st.push(a3);
                st.push(a2);
                l++;
            }
            //l++;
            if(l==kk-cnt){
                break;
            }
        }
        if(cnt%2==0){
        cout << "Bob"<<endl;;
        }else{
        cout<< "Alice"<<endl;
        }
    }
    return 0;
}