#include <bits/stdc++.h>

using namespace std;

string intToBin(int n){
    string s = "";
    while(n!=0){
        s= char(n%2+'0') + s;
        n=n/2;
    }
    return s;
}
string LowestBit(string g){
    string k="";
    for(int i=g.size()-1; i>=0 ;i--){
        if(g[i]!='1'){
            k=g[i]+k;
        }else{
            k='1'+k;
            break;
        }
    }
    return k;
}
int BitToInt(string h){
    int l=0;
    for(int i=h.size()-1;i>=0;i--){
        l=l+int(h[i]-'0')*pow(2,h.size()-i-1);
    }
    return l;
}
int main(){
    int x;
    while(cin>>x){
        if(x==0){
            return 0;
        }
        cout<<BitToInt(LowestBit(intToBin(x)))<<endl;
    }
}