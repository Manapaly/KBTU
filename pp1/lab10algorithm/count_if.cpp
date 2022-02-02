#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isEven(int x){
    return x%2==0;
}
int main(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    int cnt=count_if(v.begin(),v.end(),isEven);

    cout<<cnt<<endl;
    return 0;
}