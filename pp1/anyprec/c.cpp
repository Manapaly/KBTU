#include <bits/stdc++.h>

using namespace std;
bool search(int a[], int i, int b, int n){
    if(i == n) return false;
    if(a[i] == b) return true;
    return search(a, i+1, b, n);
} 
int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b;
    cin >> b;
    if(search(a, 0, b, n)) cout << "Yes";
    else cout << "No";
}