#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p,q;
    int maxi=INT_MIN;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && a[i][j]>maxi){
            maxi=a[i][j];
            p=i+1;
            q=j+1;
            }
        }
    }
    cout<<"Maximum element is: "<<maxi<<" with coordinates: "<<p<<";"<<q;
    

    return 0;
}