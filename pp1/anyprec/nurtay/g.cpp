#include <bits/stdc++.h>

using namespace std;

bool sanemes(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9') cnt++;
    }
    if(cnt==s.size()) return true;
    return false;
}

bool ere(string s){
    if(s.size()==1 || s.size()==2 || s.size()==4 || s.size()==8 || s.size()==16 || s.size()==32 || s.size()==64 || s.size()==128 || s.size()==256 || s.size()==512 || s.size()==1024 || s.size()==2056 || s.size()==4128 || s.size()==4128*2 ) return true;
    return false;
}

string sq(string s){
    string sqs="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i] <='z') sqs=sqs+s[i];
        if(s[i]>='A' && s[i] <='Z') sqs=sqs+s[i];
        
    }
    return sqs;
}

char ff(string s){
    if(ere(s)) return 'H';
    else if(s.size()!=0) return 'C';
}

void vvv(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout<<ff(v[i])<<" ";
    }
}
int main(){

    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<vector<string> > vv;
    int cnt=0;
    for(int j=0;j<=n;j++){
        string s;
        getline(cin, s);
        if(!sanemes(s)){
        vector<string> v;
        string gg="";
        for(int i=0;i<=s.size();i++){
            if(s[i]!=' ' || i!=s.size()){
                gg=gg+s[i];
            }
            if(s[i]==' ' || i==s.size()){
            v.push_back(sq(gg));
            gg="";
            }
        }
        vv.push_back(v);
        }
    }
    //map<int,vector<string> > :: iterator it;
    for(int f=0;f<vv.size();f++){
        vvv(vv[f]);
        cout<<endl;
    }

    return 0;
}