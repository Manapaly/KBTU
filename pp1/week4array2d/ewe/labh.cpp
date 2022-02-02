#include <iostream>

using namespace std;

int main(){
int n,m,pos;
int sum=0;
int gpa=100000;
cin>>n>>m;
int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        if(sum<gpa){
            gpa=sum;
            pos=i+1;
        }
        sum=0;
    }
    cout<<pos;
    
    return 0;
}