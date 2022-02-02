#include <iostream>
using namespace std;
const int n = 5, m = 5;

void mark(char ar[][m], int i, int j){
    if (i < 0 || i >= n || j < 0
    || j >= m || ar[i][j] == '.') return;
    ar[i][j] = '.';
    mark(ar, i - 1, j); // up
    mark(ar, i + 1, j); // down
    mark(ar, i, j - 1); // left
    mark(ar, i, j + 1); // right
}

int main(){
    //freopen("input.txt", "r", stdin);
    int cnt = 0;
    char ar[n][m];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j  = 0; j < m; ++j){
            if (ar[i][j] == '*'){
                cnt++;
                mark(ar, i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}