#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    stack <int> st;
    st.push(10000);
    int ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    int k=1;
    for(int i=s;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==0 && a[i]<0 && a[j]>0){
                // cout<<j<<" "<<i<<endl;
                ans = j-i;
                if(ans<st.top()){
                    st.pop();
                    st.push(ans);
                }
            }
        }
    }
    cout<<st.top();
    return 0;
}