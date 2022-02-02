// Заменить все символы в строке s из которых состоит строка t на символ x 

#include <iostream>

using namespace std;

int main(){
    string s;
    string t;
    char x;
    getline(cin, s);
    cin>>t>>x;

    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j]){
                s[i]=x;
            }
        }
    }
    cout<<s;
    return 0;
}