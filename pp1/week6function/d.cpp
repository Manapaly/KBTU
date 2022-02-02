#include <iostream>

using namespace std;

void read(int a[], int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}


bool books(int a[], int c ,  int n ){
    for(int i=0;i<n;i++){
        if(c==a[i]){
            cout<<"Yes";
            return 0;
        }
       
    }
    cout<<"No";
    return 0;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    
    read(a, n);

    int c;
    cin>>c;
  

    books(a,c,n);
    

    return 0;
}