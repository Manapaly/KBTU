#include <iostream>

using namespace std;

int reverseint(int n){
    int m=0;
    while(n!=0){
    m=m*10+n%2;
    n=n/10;
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    int m=0;
    while(n!=0){
        m=m*10+n%2;
        n=n/2;
    }
    cout<<m<<endl;
    cout<<reverseint(m)<<endl;

    if(m==reverseint(m)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}