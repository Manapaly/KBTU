#include <iostream>

using namespace std;
int maxi;
// int k(int x){
//     if(x==0) return maxi;
//     if(x%10>maxi){
//         maxi=x%10;
//     }
//     return k(x/10);
// }
int k(string s, int n){
    if (n == s.size()) return maxi;
    if((s[n]-48)>maxi){
        maxi=s[n]-48;
    }
    return k(s, n + 1);
}
int main(){
    string s;
    cin>>s;

    cout<<k(s,0);
    return 0;
}