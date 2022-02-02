#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    long long n;
    cin>>n;
    int k=1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            i=i*j;
        }
        cout<<k<<" ";
    }

    
    return 0;
}