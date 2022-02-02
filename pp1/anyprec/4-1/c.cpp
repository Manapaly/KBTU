#include <bits/stdc++.h>

using namespace std;
char maze[100][100];

void dfs(int k, int i, int j,int a){
    
    if(a==k) return ;
    if (i == 2*k-1 && j == 2*k-1) {
        return;
    }

    if (i < 0 || i >= 2*k-1 || j < 0
    || j >= 2*k-1  || maze[i][j]=='-') return;
    char c=char('a'+a);
    maze[i][j] = c;
    if(maze[i-1][j]=='*') dfs(k, i - 1, j,a+1);
    if(maze[i][j+1]=='*') dfs(k, i, j + 1,a+1);
    if(maze[i+1][j]=='*') dfs(k, i + 1, j,a+1);
    //if(maze[i][j+1]=='*') dfs(k, i, j + 1,a+1);
    if(maze[i][j-1]=='*') dfs(k, i, j - 1,a+1);
}
int main(){
    int k;
    cin>>k;
    //char maze[1000][1000];
    // int k;
    // k=n-1;
    //char a[2*k+1][2*k+1];
    for(int i=0;i<2*k-1;i++){
        for(int j=0;j<2*k-1;j++){
            maze[i][j]='*';
        }
    }
    for(int i=0;i<k-1;i++){
        for(int j=k+i;j<2*k-1;j++){
            maze[i][j]='-';
        }
    }
    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            maze[i][j]='-';
        }
    }
    for(int i=k;i<2*k-1;i++){
        for(int j=0;j<i-k+1;j++){
            maze[i][j]='-';
        }
    }
    for(int i=k;i<2*k-1;i++){
        for(int j=2*k-2-i+k;j<2*k-1;j++){
            maze[i][j]='-';
        }
    }
    dfs(k, k-1, k-1,0);
      
    //dfs(k, k, k,0);
    for(int i=0;i<2*k-1;i++){
        for(int j=0;j<2*k-1;j++){
            cout<<maze[i][j];
        }
        cout<<endl;
    }
    return 0;
}

