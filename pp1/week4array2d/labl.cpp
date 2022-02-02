#include <iostream>

using namespace std;

int main(){
    int n,m,p,q;
    int maxi=100000;
    int sum=0;
    cin>>n>>m;
    int a[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        cout<<"coordinates of min elements:"<<endl;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(a[i][j]<maxi){
                    maxi=a[i][j];
                    p=i+1;q=j+1;
                }
                
            }
            // cout<<maxi;
            cout<<p<<";"<<q<<endl;
            sum+=maxi;
            maxi=100000;
            

        }
        cout<<"Their sum:"<<endl;
        cout<<sum;

    return 0;
}