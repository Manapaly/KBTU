#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cnt=0;

    string d="aeiou";

    for(int i=0;i<s.size();i++){
        for(int j=0;j<5;j++){
            if(s[i]==d[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}