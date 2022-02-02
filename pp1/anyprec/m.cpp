#include <bits/stdc++.h>

using namespace std;
void simpleRec(int n,int i){
    cout<<i<<" ";
    if (i==n) return;
    simpleRec(n,i+1);
}
int main (){
    int n;
    cin >> n;

    // for(int i = 1; i <= n; i++){
    //     cout << i << ' ';
    // }
    simpleRec(n,1);
}