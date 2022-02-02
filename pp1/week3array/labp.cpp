#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int m;
    cin>>m;
    for (int i = 1; i < m; ++i){
        if (i * i == m){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}