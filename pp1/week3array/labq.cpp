#include <iostream>

using namespace std;

int main(){
    int n;
    int sum=0;
    cin>>n;
    for (int i = 1; i <= n; ++i){
        if(n%i==0){
            sum++;
        }
    }
    if (sum==2){
        cout<<"Yes";
    }else{
        cout<<"No";
    }


return 0;
}