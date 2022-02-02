#include <iostream>

using namespace std;

int main(){
    int d=0;
    int k=0;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(char(s[i])>=65 && char(s[i]<=90)){
            d++;
        }else{
            k++;
        }
    }

    cout<<k<<" "<<d;
    return 0;
}