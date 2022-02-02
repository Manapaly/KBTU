#include <iostream>

using namespace std;
int main() {
    int n,k,evens = 0,odds = 0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        if (k%2==0){
            evens++;
        }else{
            odds++;
        }

    }
    cout << evens << " "<<odds;

    return 0;
}