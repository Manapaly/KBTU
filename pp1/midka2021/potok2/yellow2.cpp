#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int k=s.size();

    char a[3][k+2];
  
    for(int i=0;i<=2;i++){
        for(int j=0;j<k+2;j++){
            a[i][j]='+';
        }
    }

    for(int i=0;i<k;i++){
            a[1][i+1]=s[i];
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<k+2;j++){
            if(a[i][j]==' '){
                a[i][j]='_';
            }
        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<k+2;j++){
            
            cout<<a[i][j];
            
        }
        cout<<endl;
    }
}