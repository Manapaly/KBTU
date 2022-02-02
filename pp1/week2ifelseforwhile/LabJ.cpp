#include <iostream>
// #include <cmath>



using namespace std;
int main() {
    int a,b,c=0;
    cin>>a;
    for(int i=1;i<=a;i++) {
        cin>>b;
        while(b!=0){
            
            if(b%10==0){
                c++;
            }
             b/=10;
        }
       
    }

    cout<<c;
    return 0;
}