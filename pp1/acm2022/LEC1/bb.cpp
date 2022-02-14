#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int cnt = 1;
    set<int> ss;
    string s = "";    
    for(int i=2;i<=n;i++){
        if(n % i == 0){
            while(n%i==0){
                s = s + to_string(i) + "*";
                ss.insert(i);
                cnt++;
                n=n/i;
            }
        }
    }
    // for(int i = 0;i<s.size()-1;i++){
    //     cout<<s[i];
    // }
    cout<<ss.size()+2 
    return 0;
}