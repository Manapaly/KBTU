#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    cin>>x;

    string s="";

    do{
    s=char(x%10+48)+s;
    x=x/10;
    } while(x>0);
    cout<<s;
    return 0;
}