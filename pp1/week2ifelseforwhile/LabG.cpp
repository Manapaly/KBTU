#include <bits/stdc++.h>
// #include <cmath>



using namespace std;
int main() {
    int n,k, max_number = INT_MIN;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>k;
        if (k > max_number){
            max_number = k;
     
        }

    }
    cout << max_number ;

    
 
 
 
 
    return 0;
}
