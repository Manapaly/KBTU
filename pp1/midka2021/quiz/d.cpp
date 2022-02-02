#include <iostream>
#include <algorithm>

using namespace std;

bool polindrome(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]==s[s.size()-i-1]){
        return true;
        }else{
        return false;
        }
    }
}

// void notpolindrome(string s){
//     int n=s.size();
//     for(size_t i=0;i<n;i++){
//         if(polindrome(s)){
//             s=s-s[n-i];
//             if(polindrome(s)==0){
//                 cout<<s.size();
//                 break;
//             }
//         }else{
//             cout<<s.size();
//             break;
//         }
//     }
// }

void notpolindrome(string s){
    if(polindrome(s)==1){
        cout<<s.size()-1;
        
    }else{
        cout<<s.size();
        
    }

}

int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-i-1]){
            return 0;
        }else{
            cout<<"0";
            return 0;
        }
    }
    // if(cnt==s.size()/2) {
    // cout<<"0";
    
    
    notpolindrome(s);
    
    return 0;
}