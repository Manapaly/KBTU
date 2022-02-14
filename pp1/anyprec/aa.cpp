#include <bits/stdc++.h>

using namespace std;

vector<int> ff(a[i])
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<2*n-1;i++){
        if(a[i]!=a[i+1]) cnt++;
        else cnt--;
    }
    cout<<cnt;

    return 0;
}