#include <bits/stdc++.h>

using namespace std;
char maze[100][100];
int a;
void dfs(int k, int i, int j){
    a++;
    if(a==k) return ;
    if (i == 2*k+1 && j == 2*k+1) {
        return;
    }

    if (i < 0 || i >= 2*k+1 || j < 0
    || j >= 2*k+1 ) return;

    maze[i][j] = char('a'+a);
    
    dfs(k, i - 1, j);
    dfs(k, i + 1, j);
    dfs(k, i, j + 1);
    dfs(k, i, j - 1);
}
int main(){
    int k;
    cin>>k;
    for(int i=0;i<2*k+1;i++){
        for(int j=0;j<2*k+1;j++){
            maze[i][j]='-';
        }
    }
   
    dfs(k, i - 1, j);
    dfs(k, i + 1, j);
    dfs(k, i, j + 1);
    dfs(k, i, j - 1);
      
    //dfs(k, k, k,0);
    for(int i=0;i<2*k+1;i++){
        for(int j=0;j<2*k+1;j++){
            cout<<maze[i][j];
        }
        cout<<endl;
    }
    return 0;
}
