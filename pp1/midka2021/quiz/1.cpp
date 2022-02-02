#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,k,maxi = INT_MIN,mini = INT_MAX ;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>k;
        if (k>maxi){
            maxi = k;
        }else if (k<mini){
            mini = k;
        }

    }
    
    cout << maxi - mini << " ";

    return 0;
}
