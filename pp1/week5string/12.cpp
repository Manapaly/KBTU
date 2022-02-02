#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;

    getline(cin, s);

    cout<<s.erase(0, 2)<<endl; //выводит текст без чего либо
    

    return 0;
}
