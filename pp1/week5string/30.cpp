#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
    
    for(int i=1;i<=10;i++){
    stringstream ss;

    ss<<"data/"<<i<<".txt";
    
    string fname=ss.str();

    freopen(fname.c_str(),"w",stdout);
    cout<<"test"<<endl;
    }
    return 0;
}