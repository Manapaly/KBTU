#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin>>s;

    string x;
    x=s;

    x.append(s, 0, 1);
    string d;
    d=x;
    reverse(d.begin(),d.end());
    if(d==x){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}