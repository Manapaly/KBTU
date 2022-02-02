#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> v;

    for(int i=0;i<10;i++){
        v.push_back(i);
    }

    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    rotate(v.begin(),v.begin()+5,v.end());

    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}