#include <iostream>

using namespace std;

int main(){
    char c[]={'h','e','l','l','o','o'};
    int n=sizeof(c)/sizeof(c[0]);
    cout<<n<<endl;

    string x(c);

    cout<<x.size()<<" "<<n<<endl;
    return 0;

}