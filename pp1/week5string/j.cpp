#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;

    s=s+s.substr(0, 1);
    string d;
    d=s;
    reverse(s.begin(),s.end());
    if(s==d){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}