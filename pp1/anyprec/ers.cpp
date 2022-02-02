#include <bits/stdc++.h>
using namespace std;
char maze[1000][1000];

bool found;

void dfs(int fi,int fj, int i, int j) {
    if (i == fi-1 && j == fj-1) {
        found = true;
    }
    
    if (i < 0 || i >= fi || j < 0
    || j >= fj || maze[i][j] == '#') return;

    maze[i][j] = '#';

    dfs(fi,fj, i - 1, j);
    dfs(fi,fj, i + 1, j);
    dfs(fi,fj, i, j + 1);
    dfs(fi,fj, i, j - 1);
}

int main(){
    int fi,fj;
    cin>>fi>>fj;
    
    for (int i = 0; i < fi; ++i) {
        for (int j = 0; j < fj; ++j) {
            cin >> maze[i][j];
        }
    }
    if(maze[fi-1][fj-1]=='#'){
        cout<<"NO";
        return 0;
    }
    dfs(fi,fj, 0, 0);
    cout << (found ? "YES" : "NO");

    return 0;
}