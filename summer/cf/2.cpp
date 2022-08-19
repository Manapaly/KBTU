#include <bits/stdc++.h>

using namespace std;

string ff(char c){
    string res = "";
    res = res + 'a';
    res = res + c;
    return  res;
}
int dd(char c){
    return int(c)-48;
}
int main(){
    string s1 = "X....";
    string s2 = "....X";
    string s3 = "X...X";
    string s4 = "XXXXX";
    string a1 = "2222222";
    string a2 = "4224114";
    string a3 = "4224224";
    string a4 = "3334222";
    string a5 = "4114224";
    string a6 = "4114334";
    string a7 = "4222222";
    string a8 = "4334334";
    string a9 = "4334224";
    string a10 = "4333334";
    vector<string> vv = {a10,a1,a2,a3,a4,a5,a6,a7,a8,a9};
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<=7;i++){
        for(int j=0;j<s.size();j++){
            v.push_back(vv[dd(s[j])][i]);
            

        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]=='1'){
            if ((i+1)%s.size()!=0){
                cout<<s1+'.';
            }else{
                cout<<s1;
            }
        }
        if(v[i]=='2'){
            if ((i+1)%s.size()!=0){
                cout<<s2+'.';
            }else{
                cout<<s2;
            }
        }
        if(v[i]=='3'){
            if ((i+1)%s.size()!=0){
                cout<<s3+'.';
            }else{
                cout<<s3;
            }
        }
        if(v[i]=='4'){
            if ((i+1)%s.size()!=0){
                cout<<s4+'.';
            }else{
                cout<<s4;
            }
        }
        if((i+1)%s.size()==0){
            cout<<endl;
        }
    }

    return 0;
}