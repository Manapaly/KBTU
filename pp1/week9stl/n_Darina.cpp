//Almat and xor
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int cnt=0;
    for (int i=0;i<a.size();i++){
        int c;
        for (int j = i + 1; j < a.size(); j++){
            c = a[i] ^ a[j];
            if(find(a.begin(), a.end(), c) != a.end()) cnt++;
        }
    }
    cout << cnt << endl;
}
// 4
// 1 2 3 4 
// <1,2>