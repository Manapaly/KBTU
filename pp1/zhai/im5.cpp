#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int v;
    int t;
    cin>>v>>t;
    
     
    if (v*t % 109 == 0 ) { 
        cout << 0 << endl;
    } else if (v > 0) { 
        cout << (v*t)%109 << endl;
    } else { 
        cout << 109+v*t%109 << endl;
    }
    

   
    return 0;
}