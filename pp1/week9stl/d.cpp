#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k;
    queue<int> q;
    for(int i=0;i<n;i++){
        cin>>x;
        q.push(x);
    }
    int cnt=0;
    while(!q.empty()){
        if(q.front()==k){
            cnt++;
            q.pop();
        }else{
        q.pop();
        }
    }
    cout<<cnt;
    return 0;
}