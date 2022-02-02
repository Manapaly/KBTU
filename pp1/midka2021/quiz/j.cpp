#include <bits\stdc++.h>

using namespace std;

int main(){
    int n,m;
    char a[n][m];
    
    string s;
    cin>>s;
    cin>>n>>m;


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=char(88);
        }
    }
    a[0][0]=char(42);
    int i,j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==68){
            n++;
            a[n][m]=char(42);
        }
        if(s[i]==82){
            m++;
            a[n][m]=char(42);
        }
        if(s[i]==85){
            n--;
            a[n][m]=char(42);
        }
        if(s[i]==76){
            m--;
            a[n][m]=char(42);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}