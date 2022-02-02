// читать числа, пока число делится на 3. вывести кол-во чисел поделенных на 3
#include <iostream>

using namespace std;

bool dev3(int n){
    if(n%3==0){
        return true;
    }
    return false;
}
int main(){
    int a;
    int cnt=0;
    
    while(cin>>a){
        if(!dev3(a)){
            cout<<cnt;
            return 0;
        }
        cnt++;
      
    }
    cout<<cnt;
    return 0;
}