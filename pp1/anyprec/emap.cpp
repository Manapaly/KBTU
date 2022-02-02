#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a;
    cin >> n;
    string s;
    map<string, int> cities;
    int sum = 0;
    while(n--){
        cin >> m;
        while(m--){
            cin >> s >> a;
            sum += a;
            cities[s] += a;
        }
    }
    for (pair<string, int> i : cities){
        cout << i.first << ' ' << 100.*i.second/sum << '\n';
    }
    return 0;
}