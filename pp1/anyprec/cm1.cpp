#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    map<string, int> menu;
    map<string, int> vybor;
    string name;
    int cena;
    int shtuk;
    while(n--){
        cin>>name>>cena; 
    }
    cin>>m;
    while(m--){
        cin>>name>>shtuk; 
    }
    for (pair<string, int> i : cities){
        cout << i.first << ' ' << 100.*i.second/sum << '\n';
    }
    return 0;
}