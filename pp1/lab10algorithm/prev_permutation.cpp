#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(int x){
    cout<<x<<" ";
}
int main(){
    vector<int> v;
    for(int i=4;i>=0;i--){
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),func);
    cout<<endl;
    while(prev_permutation(v.begin(),v.end())){
        for_each(v.begin(),v.end(),func);
        cout<<endl;
    }
    return 0;
}