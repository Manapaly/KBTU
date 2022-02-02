#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    int sum=0;
    sort(v.begin(), v.end());
    for(int i=1;i<=k;i++){
    sum=sum+v[n-i];
    }
    cout<<sum;
    return 0;
}