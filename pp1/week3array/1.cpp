#include <iostream>

using namespace std;

int main (){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n=0,sum=0,k;
        while(cin>>k){
            n++;
            sum+=k;
        }
        cout<<n<<" "<<sum;

    return 0;
}