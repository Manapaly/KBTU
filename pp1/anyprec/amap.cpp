#include <bits/stdc++.h>

#define ll long long
#define all(v) (v).begin(),(v).end()

using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<string> names(n);
    vector<ll> marks(n);
    for (ll i = 0; i < n; i++){
        cin >> names[i] >> marks[i];
    }
    sort(all(names));
    sort(all(marks));
    for (ll i = 0; i < n; i++){
        cout << names[i] << ' ' << marks[i] << '\n';
    }
    return 0;
}