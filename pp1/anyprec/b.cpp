#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int to_int(string s){
    int k=0;
    for(int i=0;i<s.size();i++){
        k=k*10;
        k=k+(int(s[i])-48);
    }
    return k;
}
int main() {
    string s;
    cin>>s;
    string s1="";
    string s2="";
    int sos;
    for(int i=0;i<s.size();i++){
        if (s[i]=='*'){
            sos = i;
        }
    }
    for(int i=0;i<sos;i++){
        if (int(s[i])>=48 and int(s[i])<=57){
            s1=s1+s[i];
        }
    }
    for(int i=sos;i<s.size();i++){
        if (int(s[i])>=48 and int(s[i])<=57){
            s2=s2+s[i];
        }
    }
    cout<<to_int(s1)*to_int(s2);
    return 0;
}