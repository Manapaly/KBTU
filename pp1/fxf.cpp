#include <bits/stdc++.h>

using namespace std;


int main(){
    int x;
    cin >> x;
    int a=1;
    while(x != 0){
        if(a % 7 != 0){
            if(a % 2 == 0) x = x - 4;
            else x = x + 3;
            a++;
        }else{
            a--;
        }
    }
    cout<< a;
    return 0;
}