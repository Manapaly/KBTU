#include <iostream>

using namespace std;

void read(int a[],int n){ // int a[]-сам массив, int n,сколько элементов я бы хотел использовать
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
}

void print(int a[],int n){
    for(int i=0;i<n; i++){
        cout<< a[i]<< " ";
    }
    cout<<endl;
}

int sum(int a[], int n){
    int res=0;
    for(int i=0;i<n; i++){
        res=res+a[i];
    }
    return res;
}
int main(){
    int n;
    cin>>n;

    int a[n];
    
    read(a, n);
    print(a, n);

    cout<<sum(a, n)<<endl;
    
    return 0;
}