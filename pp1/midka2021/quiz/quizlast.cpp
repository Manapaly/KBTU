#include <iostream>

using namespace std;

int main(){
    int x,y,n,a,b;
    int arr[x][y];
    cin>>x>>y>>n;

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            arr[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        cin>>a>>b;
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            arr[a][b]=-1;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a-1>=0 && b-1>=0){
                arr[a-1][b]++;
                arr[a+1][b]++;
                arr[a][b-1]++;
                arr[a][b+1]++;
            }
        }
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j];
        }
    }


    return 0;
}