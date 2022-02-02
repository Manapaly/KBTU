#include <bits\stdc++.h>

using namespace std;

string bin(string x){
    string d;
    while(stoi(x)!=0){
        d=char(x%2+48)+d;
        x=x/2;
    }
    return d;
}

string int_to_string(int x){
    int x;
    stringstream ss;
    ss << a;
    string str = ss.str();
    return ss;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum;
    cout<<bin(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+bin(int_to_string(a[i]));
    }
    cout<<sum;

    return 0;
}