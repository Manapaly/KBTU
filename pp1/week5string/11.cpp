#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;

    getline(cin, s);

    cout<<s.substr(0, 7)<<" "; //выводит определенное количество символов
    

    return 0;

}