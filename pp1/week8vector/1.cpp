#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> v={1,2,3,51,22,4};
    vector <int> :: iterator it;
    // for(it = v.begin(); it != v.end(); ++it){
    //     cout<< *it <<" ";
    // }
    for (auto i:v){
        cout<< i <<' ';
    }
    return 0;
}