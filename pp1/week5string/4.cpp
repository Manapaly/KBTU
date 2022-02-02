#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s); 
    for(int i=0;i<s.length();i++){ // lenght длинна строки
        cout<<s[i]<<" ";
    }
    return 0;
}