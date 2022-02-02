#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    string x;

    cin>>s;

    bool ans = true;
    for(int i=0; i<s.size();i++) {

        for(int j = 0;j<=s.size();j++) {
            x=s;
            x.insert(j, string(1, s[i]));
            for(int k = 0; k < x.size()/2;k++) {
                if(x[k] != x[x.size() - 1 - k]) {
                    ans = false;
                }
            }
            if(ans) {
                cout << "YES";
                return 0;
            }
            ans = true;
        }
    }
    cout<<"NO";
    return 0;
}