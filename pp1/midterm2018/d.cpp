#include <iostream>

using namespace std;

int main(){
    char d;
    cin>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==d){
            s.erase(i, 1);
        }
    }
    cout<<s;
    return 0;
}