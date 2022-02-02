#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    string name;
    int mark;
    vector <string> v1;
    vector <int> v2;
    for(int i=0;i<n;i++){
        cin>>name>>mark;
        v1.push_back(name);
        v2.push_back(mark);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
    return 0;
}