#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    int x=144;
    string s = "abc";
    char c='.';

    ss<<x<<" "<<s<<" "<<c;
     
    cout<<ss.str()<<endl; // вывести как одну строку
    

    return 0;
}