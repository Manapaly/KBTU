#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s="49";      // stoi функция преращающая строку в число
    string t="1";                           

    int s1=stoi(s);
    int t1=stoi(t);
   
    cout<<s1+t1;
    return 0;
}
