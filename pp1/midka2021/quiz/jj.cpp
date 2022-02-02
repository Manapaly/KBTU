#include <iostream>
using namespace std;
int main(){
    int n, m;
    string s;
    cin >> s;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=char(88);
        }
    }
    a[0][0]=char(42);
    
    int i, j=0;
    for(size_t k=0;k<s.size();k++){
        if(int(s[k])==char(68)){
            i++;
            a[i][j]=char(42);
        }else if(int(s[k])==char(82)){
            j++;
            a[i][j]=char(42);
                    
        }else if(int(s[k])==char(85)){
            i--;
            a[i][j]=char(42);
                    
        }else if(int(s[k])==char(76)){
            j--;
            a[i][j]=char(42);
                    
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