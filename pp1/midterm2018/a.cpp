#include <iostream>

using namespace std;

int absolute(int x,int y){
    int c;
    c=abs(x-y);
    return c;
}
int main(){
    int x;
    int y;
    cin>>x>>y;
    cout<<absolute(x,y);
    return 0;
}