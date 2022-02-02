#include <iostream>

using namespace std;

bool isVowel(char c){
    //char c[]={'a','e','i','u','u','A','E','U','I','U'};
    if(c!='a' && c!='e' && c!='i' && c!='u' && c!='A' && c!='E' && c!='I' && c!='O' && c!='U' && c!='o' ) return true;
    
    return false;
}

int main(){
    string s;
    getline(cin, s);
    for(int i=0;i<s.size();i++){
    if(isVowel(s[i])) cout<<s[i];
    }

    return 0;
}