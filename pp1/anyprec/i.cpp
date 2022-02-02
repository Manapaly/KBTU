#include <bits/stdc++.h>

using namespace std;
int sum = 0;
int heater (string s, int i){
    if(i == s.size()) return sum;
    sum = sum + (s[i]-'0')/2;
    return heater(s, i+1); 
}
int main (){
    string s;
    cin >> s;
    cout << heater(s, 0);
}