#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    int k=s.size();
    string a[3][k+2];
    
        for(int j=0;j<=k;j++){
            a[1][j+1]=s[j];
        }
    
    for(int i=1;i<=k;i++){
        for(int j=0;j<k;j++){
            cout<<a[i][j];
        }
    }
    return 0;
}