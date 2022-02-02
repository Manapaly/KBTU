#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int min=97;

    for(int i=1;i<s.size();i++){
        if(char(s[i])>min){
           min=char(s[i]);
        }
    }
    cout<<char(min);
    return 0;
}