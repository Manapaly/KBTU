#include <iostream>
#include <string.h>

using namespace std;

int main() {
string s1 = "abcdefghijklmnopqrstuvwxyz";
string s2;
getline(cin, s2);
if(strstr(s1.c_str(),s2.c_str())){
   cout<<"YES";
}else{
    cout<<"NO";
}

    return 0;
}