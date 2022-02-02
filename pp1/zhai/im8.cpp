#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int v;
    
    cin>>v;
    if (v % 2) { 
        cout << v+1 << endl;   

    } else { // v если нечетное
        cout << v+2 << endl;
    }
   
    

   
    return 0;
}