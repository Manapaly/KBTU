#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int x){
    x = abs(x);
    if(x==0 || x==1){
        return false;
    }
    bool test = true;
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            test = false;
            break;
        }else{
            test = true;
        }
        
    }
    return test;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt = count_if(v.begin(), v.end(), IsPrime);
    cout << cnt;

}