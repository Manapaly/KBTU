#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int cnt = 0;
    string s = "";    
    for(int i=2;i<=n;i++){
        if(n % i == 0){
            while(n%i==0){
                n=n/i;
                cnt++;
            }
        }
        if(cnt>1){
            // cout<<i<<"^"<<cnt<<"*";
            s = s+(to_string(i)+'^'+to_string(cnt)+"*");
        }if(cnt==1){
            // cout<<i<<"*";
            s = s + (to_string(i) + "*");
        }
        cnt = 0;
    }
    for(int i = 0;i<s.size()-1;i++){
        cout<<s[i];
    }

    return 0;
}