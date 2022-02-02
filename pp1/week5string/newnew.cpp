#include <iostream>
#include <algorithm>


using namespace std;

bool polind(string s){
    // for(size_t i=0;i<s.size();i++){
    //     if(s[i]==s[s.size()-1]){
    //         return false;
    //     }
    // }
    string d;
    d=s;
    if(reverse(d.begin(),d.end())==s){
        return 1;
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    int cnt=0;
    //string s;
    

    while(n--){
        string x;
        cin>>x;
        if (polind(x)){
            cnt++;
        }
    }
    cout<<cnt;
    // for(size_t j=0;j<s.size();j++){
    //     cin>>x[j];
    // }
    // for(size_t j=0;j<s.size();j++){
    //     if(polind(x[j])){
    //         cout<<"Yes"<<" ";
    //     }else{ cout<<"no";
    //     }
    // }


    return 0;
}