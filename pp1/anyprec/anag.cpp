#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<"The anagram variants for string "<<s<<" are:"<<endl;
        sort(s.begin(), s.end());
    do{
        for (int i = 0; i < s.size(); i++){
            cout<<s[i];
        }
        cout<<endl; // 1 2 3; 1 3 2; 2 1 3; 2 3 1; 3 1 2; 3 2 1
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}