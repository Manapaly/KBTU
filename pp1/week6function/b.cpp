#include <iostream>


using namespace std;

void read(int a[], int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void print(int a[], int n){
    for(int i=0;i<n; i++){
        cout<< a[i]<< " ";
    }
    cout<<endl;
}


void diff(int a[], int b[] , int c[], int n ){
    for(int i=0;i<n;i++){
        c[i]=abs(a[i]-b[i]);
    }
}


int main(){
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    

    read(a, n);
    read(b, n);

    diff(a,b,c,n);
    print(c, n);

    return 0;
}