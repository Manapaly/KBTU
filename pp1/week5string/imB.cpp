#include <iostream>

using namespace std;

int main(){
    char c;
    cin>>c;

    // if(c>='a'&&c<='z'){
    //     c=char(c-32);
    // }else{
    //     c=c;
    // }
    // cout<<c;
    cout<<char(toupper(c));
    return 0;
}