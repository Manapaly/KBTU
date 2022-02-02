#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
    int x=49;      // itoa функция преращающая число в строку
    
    char buffer[10];

    itoa(x, buffer, 10);

    cout<<buffer;
    return 0;
}
