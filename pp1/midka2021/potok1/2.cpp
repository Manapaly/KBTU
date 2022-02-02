//  в промежутке m.n вывести все числа у которой есть цифра 5

#include <iostream>

using namespace std;

bool have5(int n){
    while(n!=0){
        if(n%10==5){
            return true;
        }
        n=n/10;
    }
    return false;
}

int main(){
    int m;
    int n;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        if(have5(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}