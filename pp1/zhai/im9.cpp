#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    
    cin>>n;
    if (n < 1440) { 
        cout << n/60 << " "<<  n%60<< endl;   

    } else { // n если больше 1440
        cout << (n-1440*(n/1440))/60 << " " << (n-1440*(n/1440))%60 << endl;
    }
   
    

   
    return 0;
}