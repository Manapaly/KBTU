#include <iostream>

#include <string>




using namespace std;






int main() {
    string s;
    cin >> s;

    int a[s.size()];

    for(int i = 0; i < s.size(); i++) {
        a[i] = 0;
    }

    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == s[i]) {
                a[i]++;
            }
        }
    }   
     bool ans = true;
    for(int i = 0; i < s.size() - 1; i++) {
        if(a[i] != a[i+1]) {
            ans = false;
        }
    }
    if(ans) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}