#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k; cin >> n >> k;
    char a[n][n];
    vector <int> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = '*';
        }
    }
    int cnt = 0;
    while (k--) {
        int x,y; cin >> x >>y;
        x--; y--;
        for (int j = 0; j < n; j++) {
            a[x][j] = '.';
        }
        for (int i = 0; i < n; i++) {
            a[i][y] = '.';
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] != '.')cnt++;
            }
        }
        v.push_back(cnt);
        cnt=0;
    }
    for (int i = 0; i < v.size(); i++)cout<<v[i] << ' ';
    return 0;
}