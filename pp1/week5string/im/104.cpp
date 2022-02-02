#include <iostream>

using namespace std;

int main(){
    char c;
    cin>>c;
    if(c>=92 && c<=127){
        c=toupper(c);
    }else{
        c=tolower(c);
    }
    cout<<c;
    return 0;
}