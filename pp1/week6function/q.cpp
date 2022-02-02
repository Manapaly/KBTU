#include <bits/stdc++.h>
using namespace std;

double percofgirls(int All, int Girls){
double c;
c=double (Girls) / All * 100;
    return c;
}

int main(){

    int a, b;
    cin >> a >> b;
    cout << percofgirls(a, b);

    return 0;
}