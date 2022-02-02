#include <bits/stdc++.h>

using namespace std;

int bintoint(string s){
    int k=0;
    for(int i=0;i<s.size();i++){
        k=k+int(s[s.size()-i-1]-'0')*pow(2,i);
    }
    return k;
}

string ab;
string as;
int main(){
    int a,b,n;
    cin>>n>>a>>b;
  
    while(a!=0){
        as=char(a%2+'0')+as;
        a=a/2;
    }
  
    while(b!=0){
        ab=char(b%2+'0')+ab;
        b=b/2;
    }
   // cout<<as<<" "<<ab<<endl;
    int ss=as.size();
    int bb=ab.size();
    while(ss!=8){
        as='0'+as;
        ss++;
    }
    
    while(bb!=8){
        ab='0'+ab;
        bb++;
    }
    //cout<<as<<" "<<ab<<endl;
    
    swap(as[8-n-1],ab[8-n-1]);
   // cout<<as<<" "<<ab<<endl;   
    //cout<<bintoint(as)<<" "<<bintoint(ab)<<endl;
    if(bintoint(as)>bintoint(ab)){
        cout<<"Good deal for the first number";
        return 0;
    }
    if(bintoint(as)<bintoint(ab)){
        cout<<"Good deal for the second number";
        return 0;
    }else if(bintoint(as)==bintoint(ab)){
        cout<<"Nothing has changed";
        return 0;
    }
    return 0;
}