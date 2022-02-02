#include <iostream>

using namespace std;

int main(){
    int a[100];
    int n;
    cin>>n;
    for (int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for (int i=0 ; i<n ; i++){
        if (a[i]%2==0){
        cout<<a[i]<<" ";}
    }
    cout<<endl;
    for (int i=1 ; i<n ; i++){
        if (i%2==1){
            cout<<a[i]<<" ";
        }
    }

return 0;
}