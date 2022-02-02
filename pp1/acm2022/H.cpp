#include <iostream>
#include <cmath>
#include <vector> 

using namespace std;
double BinaryPower(double b, unsigned long long e) {
       double v = 1.0;
       while(e != 0) {
              if((e & 1) != 0) {
                     v *= b;
              }
              b *= b;
              e >>= 1;
       }
       return v;
}
long long convert(long long k,string g){
    long long rr=0;
    for(long long i=g.size()-1;i>=0;i--){
        rr=rr+(g[i]-'0')*BinaryPower(k,g.size()-i-1);
    }
    return rr;
}

int main(){
    string s;
    cin>>s;
    long long k,b,m;
    cin>>k>>b>>m;
    vector<string> v;
    for(long long i=0;i<=s.size()-k;i++){
        string ss="";
        for(long long j=i;j<k+i;j++){
            ss=ss+s[j];
        }
        v.push_back(ss);
    }
    long long final=0;
    
    for(long long i=0;i<v.size();i++){
        final=final+convert(b,v[i])%m;
    }
    cout<<final;
    return 0;
}