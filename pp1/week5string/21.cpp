#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss; 

    ss<<"144";

    int x;
    ss>>x;            //из строки сделать числовое обозночение

    cout<<sqrt(x);
    

    return 0;
}