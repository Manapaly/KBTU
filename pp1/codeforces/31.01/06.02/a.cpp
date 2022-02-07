#include <bits/stdc++.h>

using namespace std;

string rev(string str){
    int n = str.length();
  
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main(){
    int t, n, k;
    string s;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        cin >> s;
        int cnt = 1;
        for(int i = 0; i < k; i++){
            string w = s + rev(s);
            string t = rev(s) + s;
            if(w != t)cnt++;
            if(w + rev(w) != rev(w)+w) s=w;
            else s=t;
        }
        cout << cnt << endl;
    }
    return 0;
}