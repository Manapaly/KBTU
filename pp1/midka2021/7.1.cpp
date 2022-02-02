#include <iostream>

using namespace std;

int main()
{
    int n, a, b, m;
    
    cin >> a >> n >> b >> m;
    int num1 = ((a >> n) & 1), num2 = ((b >> m) & 1);
    if(num1 == num2){
        cout << "Thunderclap and Flash!";
    }else{
        cout << "Thunder Breathing... First form...";
    }
}