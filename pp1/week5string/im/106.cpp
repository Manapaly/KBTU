#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int cnt=0;

    for(int i=0;i<s.size();i++){
        if(char(s[i])==32){
            cnt++;
        }
    }
    cout<<cnt+1;
    return 0;
}