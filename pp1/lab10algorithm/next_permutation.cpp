#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(int x){
    cout<<x<<" ";
}
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),func);
    cout<<endl;
    while(next_permutation(v.begin(),v.end())){
        for_each(v.begin(),v.end(),func);
        cout<<endl;
    }
    return 0;
}