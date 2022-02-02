// int to bit
#include <iostream>

using namespace std;

string toBin(int n, string res){
    if(n==0) return res;
    return toBin(n/2, char(n%2+48)+res);
}

int main(){
    int n;
    cin>>n;
    string s="";

    cout<<toBin(n,s)<<endl;
    return 0;
}