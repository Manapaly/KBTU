#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    vector<int> :: reverse_iterator it;
    for(it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";
    }
    return 0;
}