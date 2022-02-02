#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss; 
    ss<<144;

    string x;
    ss>>x;            

    cout<<x.size();
    

    return 0;
}