#include <bits/stdc++.h>
// #include <cmath>



using namespace std;
int main() {
    int a,b,c=0;
    cin>>a;
        while(a!=0){
            cin>>b;
            if(b%10==7){
                c++;
                
            }
        a--;
        }
    cout<<c;
    return 0;
}