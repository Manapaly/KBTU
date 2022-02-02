#include <iostream>

using namespace std;

int sumo(string s, int n){
    int sum=0;
    if(n==s.size()) return sum;
    // sum=sum+(s[n]-48);
    return sumo(s,n+1)+s[n]-48;
}

int main(){
    
    string a;
    cin >> a;
    cout << sumo(a, 0);

    return 0;
}