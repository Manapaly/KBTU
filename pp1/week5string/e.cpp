#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int sume=0;
    int sumo=0;
    for(int i=0;i<s.size();i++){
        if(i%2==0)
        sume+=(s[i]-'0');
        if(i%2==1)
        sumo+=(s[i]-'0');

    }
    if(sume==sumo) {
    cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}