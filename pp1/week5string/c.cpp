#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;
    cin>>s;

    string x;
    cin>>x;  
  
    for(int i=0;i<s.size() - x.size()+1;i++){
            if(s.substr(i, x.size())==x){
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";
   

    return 0;
}
