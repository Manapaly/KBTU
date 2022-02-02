#include <iostream>

using namespace std;

int main(){
    int ar[26];
    for(int i=0;i<26;i++){
        ar[i]=0;
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        ar[s[i]-97]++;
        if(ar[s[i]-97]!=1){
            cout<<s[i];
            ar[s[i]-97]=1;
        }
    }
    
    return 0;
}

    