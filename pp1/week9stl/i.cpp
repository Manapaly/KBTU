#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    string soz;
    for(int i=0;i<n;i++){
        cin>>soz;
        ++m[soz];
        if(m[soz]==1){
            cout<<"new user added"<<endl;
        }else if(m[soz]>1){
            cout<<"user already exists"<<endl;
        }
    }
    return 0;
}