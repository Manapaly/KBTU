#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    int c[10]={0,0,0,0,0,0,0,0,0,0};
    int cnt[10];

    for(size_t i=0;i<s.size();i++){
        if(char(s[i])==i+48){
            cnt[i]++;
            cout<<i<<":"<<cnt[i]<<endl;
        }
    }
    return 0;
}