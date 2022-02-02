#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string t;
    set<string> s;
    vector<string> v;
    vector<string> :: iterator it;
    for(int i=0; i<n; i++){
        cin >> t;
        if(s.find(t)==s.end()){
            s.insert(t);
        }else{
            it = find(v.begin(), v.end(), t);
            if(it == v.end()){
                v.push_back(t);
            }
        }
    }
    for(auto i: v){
        cout << i << "\n";
    }
        
    return 0;
    
}