#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    
  
    int cnt[100];
    for(int i=0;i<s.size();i++){
       cnt[i]=0;
    }
    for(int i=0;i<s.size();i++){
       cnt[s[i]-'0']++;
    }
    for(int i=0;i<10;i++){
       if(cnt[i]>0 && cnt[i]<301){
           cout<<i<<": "<<cnt[i]<<endl;
       }
    }
    return 0;
}