#include <iostream>

using namespace std;
int main(){
    
    // for(int i=100;i<=999;i++) {
    //     if(((i%10)+(i/10%10)+(i/100))%3==0)
    //         cout<<i<<" ";
    // }
    for(int i=1;i<=9;i++)
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++)
                if((i+j+k)%3==0)
                    cout<<i<<j<<k<<" ";
    return 0;
}