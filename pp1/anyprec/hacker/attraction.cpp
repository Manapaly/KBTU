#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int rost;
        cin>>rost;
        q.push(rost);
    }
    int k;
    cin>>k;
    int cnt=0;
    while(!q.empty()){
        int y=q.front();
        if(y>=k) cnt++;
        q.pop();
    }
    cout<<cnt;
    return 0;
}