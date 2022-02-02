#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    cin>>c;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(c==s[i]){
            s.erase(i, 1);
        }
    }
    cout<<s;

    return 0;
}