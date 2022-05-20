
#include <bits/stdc++.h>
using namespace std;
int main() {
    int min = 1e9;
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if (a[i][j] < min)min = a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != min && a[i][j] < 0)a[i][j] = 0;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}