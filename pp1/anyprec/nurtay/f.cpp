#include <bits/stdc++.h>

using namespace std;
char a[10][10];
int main(){
    //char a[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            a[i][j]='_';
        }
    }
    int k,l;
    int m,n;
    cin>>k>>l;
    cin>>m>>n;
    a[k][l]='*';
    a[m][n]='$';
    string s;
    cin>>s;
    for(int u=0;u<s.size();u++){
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        if(s[u]=='R'){
                a[i][j+1]='*';
        }else if(s[u]=='L'){
                a[i][j-1]='*';
        }else if(s[u]=='D'){
                a[i+1][j]='*';
        }else if(s[u]=='U'){
                a[i-1][j]='*';
        }
        }
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}