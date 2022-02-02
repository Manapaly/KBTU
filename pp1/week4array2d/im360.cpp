#include <iostream>

using namespace std;

int main(){
    int n,m;
    int pos=0;
    int max=10000;
    int sumN;
    cin>>n>>m;
    int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sumN+=a[i][j];
            }
            if(sumN<max){
                max=sumN;
                pos=i+1;
            }
            sumN=0;
        }
        cout<<pos<<endl<<pos;
    return 0;
}