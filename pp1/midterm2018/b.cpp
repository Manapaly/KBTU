#include <iostream>

using namespace std;

string inttostring(long long n){
    string s;
    s="";
    while(n!=0){
    s=char(n%10+48)+s;
    n=n/10;
    }
    return s;
}

int main(){
    long long n;
    cin>>n;
    string s;
    s=inttostring(n);
    for(int i=0;i<s.size();i++){
        if(s[1]=='7' && s[2]=='1' && s[3]=='7') {
            cout<<"Astana";
            break;
        }
        else if(s[1]=='7' && s[2]=='2' && s[3]=='7') {
            cout<<"Almaty";
            break;
        }
    }
    return 0;
}