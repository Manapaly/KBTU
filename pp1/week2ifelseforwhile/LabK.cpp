#include <bits/stdc++.h>
// #include <cmath>



using namespace std;
int main() {
    int n,i;
    cin>>n;

    for(int i=1;i<=n;i++){
        
        if (pow(i, 2)<=n){
            cout << pow(i, 2) << endl;
        }
    }

    return 0;
}