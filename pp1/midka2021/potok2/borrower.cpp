#include <iostream>

using namespace std;

int main(){
    int n; // amount of friends
    cin>>n;
    int a[n];
    int x; // sum that he has;
    cin>>x;
    int y;
    cin>>y; // sum that he owes to bank;
    for(int i=0;i<n;i++){
        cin>>a[i]; // sum of his each friend
    }
    int k; // сумма которая не хватает
    k=y-x;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>=k) cnt++;
    }
    cout<<cnt;
    return 0;
}