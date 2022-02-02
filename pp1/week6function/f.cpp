#include <iostream>
#include <iomanip>

using namespace std;

bool valid(string s, int n){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i)>=48 && s.at(i)<=57){
            cnt++;
        }
    }
    if(cnt>=n){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s;
    cin>>s;
    
    int n;
    cin>>n;
    
    valid(s, n)? cout << "YES" : cout << "NO";
  
    return 0;
}