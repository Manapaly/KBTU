#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;

    getline(cin, s);

    string x;
    x=s;

    reverse(x.begin(),x.end());

    if(x==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    

    return 0;

}