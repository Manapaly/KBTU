#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    if(k<=n ){
        cout<<ceil(2*float(n)/k);
    }else{
        cout<<"2";
    }
   

return 0;
}