#include <iostream>

using namespace std;

int main(){
    int n,m=0;
    cin>>n;
    cout<<"2 is prime"<<endl;
    for(int i=3;i<=n;i++){
        for(int j=2;j<i;j++){
        if(i%j==0){
            break;
        }else{
            m++;
        }
        }
        if(m==i-2){
       cout<<i<<" is prime"<<endl;
        }
        m=0;
    }
    
    return 0;
}