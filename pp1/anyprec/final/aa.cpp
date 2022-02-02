#include <bits/stdc++.h>
using namespace std;

void sumCount(string n, int cnt) {
    string temp = "";
    long long sum = 0;

    if(n.size() == 1){
        cout << n << " " << cnt;
        return;
    }
    cnt++;
    for(int i = 0; i < n.size(); i++){
        sum += n[i] - '0';
    }
    temp = to_string(sum);
    sumCount(temp, cnt);
}

int main(){
    string n;
    cin >> n;
    sumCount(n, 0);
}