#include <iostream>

using namespace std;
int cnt[26];
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 && s[i]<=122) cnt[int(s[i]-'a')]++;
        cout<<s[i]<<" "<<cnt[int(s[i]-'a')]<<endl;
    }
    
    return 0;
}