#include <iostream>

using namespace std;
int s;
int j(int x){
    if(x==0) return s;
    s=x%10/2+s;
    return j(x/10);
}

int main(){
    int n;
    cin>>n;

    cout<<j(n);
    return 0;
}