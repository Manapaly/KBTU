#include <iostream>
using namespace std;

bool even(int n){
    if(n%2==0) return true;
    else return false;
}
int cntofeven(string s, int n){
    int cnt = 0;
    if (n == s.size()) return cnt;
    if(even(s[n]-48)) cnt++;
    return cnt+=cntofeven(s,n+1);
}
int main(){
    string a;
    cin >> a;
    cout << cntofeven(a, 0);
    return 0;
}
