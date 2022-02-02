#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;
    cin>>s;

    string z;
    cin>>z;

    string x;
    x=z;
    reverse(x.begin(),x.end());

    if(x==s){
        cout<<"YES";
    }else if(z==s ){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
