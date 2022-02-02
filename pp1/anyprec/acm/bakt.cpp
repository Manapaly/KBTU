#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n,k;
    cin>>n>>k;
    string s;
    n = 1 / n;
    for(int i = 0 ; i < 10; i++){
        double x = n * k;
        s = s + to_string(floor(x));
        n = abs(floor(x) - x);

    }
    string y;
    for(int i = 1 ;i < s.size() ; i++){
        if(s[i] != '.'){
            y = y + s[i];
        }
    }
    cout<<y;
    
}