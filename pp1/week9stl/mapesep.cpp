#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(){
    map<string,int> m;

    string name;
    int count;

    while(cin>>name>>count){
        if(count>0){
            m[name]+=count;
            cout<<"ok"<<endl;
        }else{
            if(m[name]>=abs(count)){
                m[name]+=count;
                cout<<"ok"<<endl;
            }else{
                cout<<"unreal"<<endl;
                cout<<"aviable: "<<name<<" "<<m[name]<<endl;
            }
        }
    }
    return 0;
}