#include <iostream>
#include <cmath>


using namespace std;

bool pow2(int n){
    for(int i=0;i<=sqrt(n);i++){
        if(pow(2, i)==n) return true;
    }
    return false;
}

int main(){
    float n;
    float m;
    cin>>n>>m;
    float k;
    k=n/m;
    cout<<k<<endl;
    if(pow2(k)) cout<<"YES";
    else cout<<"NO";
    return 0;
}