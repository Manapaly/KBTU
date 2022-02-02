#include <iostream>

using namespace std;

int main(){
    double h1,m1;
    double h2,m2;
    cin>>h1>>m1;
    cin>>h2>>m2;
    if(h2>h1) {
    cout<<"Yes";
    return 0;
    } if(h2<h1) {
    cout<<"No";
    return 0;
    } if(h2==h1 && m2>m1) {
    cout<<"Yes";
    return 0;
    } if(h2==h1 && m2<m1) {
    cout<<"No";
    return 0;
    } if(h2==h1 && m2==m1) {
    cout<<"No";
    return 0;
    }
    return 0;
}