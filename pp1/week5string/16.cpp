#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;

    getline(cin, s);

    string x;
    cin>>x;    

    if(s.find(x)==string::npos){
        cout<<"not found";
    }else{
        cout<<"found";
   }

    return 0;
}