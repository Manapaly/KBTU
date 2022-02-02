#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s); // если строка содержит больше одного слова

    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}