#include <iostream>

using namespace std;

void read(int x){
    while(cin>>x){
        if(x==0) break;
    }
}
int sum(int x){
    
}
int main(){
    int x;
    int sum=0;
    while(cin>>x){
        if(x==0) break;
        sum+=x;
    }
    cout<<sum;
    return 0;
}