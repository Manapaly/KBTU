#include <iostream>

using namespace std;
string s;
string toBinary(int x){
    if(x==0) return s;
    s=char(x%2+48)+s;
    return toBinary(x/2);
}
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    cout<<toBinary(n);
    return 0;
}