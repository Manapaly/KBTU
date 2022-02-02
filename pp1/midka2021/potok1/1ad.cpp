// дано число n, далее n чисел. Посчитать XOR чисел массива, и вывести YES если оно равно 2^k
// где k любое наростающее число

// 1^2^3^4^5 == 2^k
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x, m;

    while(n--){
        cin >> x;
        m ^= x; // m = m ^ x
    }
    cout << m << endl;

    // int temp = 1;
    
    // while(temp <= m){
    //     temp = pow(2, temp);
    //     temp++;
    // }
    
    // cout << ((temp == m) ? "YES" : "NO"); // то же самое что внизу
    /*
    if(temp == m) cout << "YES";
    else cout << "NO";
    */

    return 0;
}