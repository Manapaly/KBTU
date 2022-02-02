#include <iostream>
#include <vector>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    int sum=0;

    while(cin>>n){
        sum+=n;
    }
    cout<<sum;
    return 0;
}