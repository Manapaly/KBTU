#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    int x;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>a>>b;
    //reverse(v.begin()+a, v.end()-n+b+1);
    reverse(v.begin()+a, v.begin()+b+1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}