#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    
    for(int i=0;i<s.size();i++){
        int k;
        k=s.at(i)-n;
        if(k<65) k=k+26;
        else if(k>90) k=k-26;
        cout<<char(k);
    }

    return 0;
}