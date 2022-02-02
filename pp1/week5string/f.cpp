#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;

    cin>>s;
    long long l,r;
    cin>>l;
    cin>>r;

    cout<<s.substr(l, r-l+1); 
    

    return 0;

}