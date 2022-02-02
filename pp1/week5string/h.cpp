#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int maxi=0;
    int ok=0;
    int cnt[10]={0,0,0,0,0,0,0,0,0,0};

    for(size_t i=0;i<s.size();i++){
        cnt[s.at(i)-48]++;
       // cout<<cnt[s.at(i)-48]<<" ";
        
    }
    for (size_t i=0;i<10;i++){
        if (cnt[i]>maxi){
            maxi=cnt[i];
            
        }
    }
    for (size_t i=0;i<10;i++){
        if (cnt[i]==maxi || cnt[i]==0)
        ok++;
    }
    if (ok==10) cout << "YES";
    else cout << "NO";
    
    return 0;
}