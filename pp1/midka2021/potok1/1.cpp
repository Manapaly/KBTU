// массив берилген сол массивтын сандарынын xor-ы 2^ға тең болса "YES", БОМАСА НОУ
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x,n;
    int m=0;
    cin>>n;
    
    while(n--){
        cin>>x;
        m=m ^ x;
    }
    
    for(int i=0;i<=sqrt(m);i++){
        if(m==pow(2, i)){
           cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}