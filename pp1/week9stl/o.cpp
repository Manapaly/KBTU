#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    string login;
    string password;
    map<string,string> m;
    for(int i=0;i<n;i++){
        cin>>login>>password;
        m.insert(make_pair(login,password));
    }
    int k;
    cin>>k;
    map<string,string> :: iterator it;
    /*
    Alikhan lalala
    Slava kpss

    Meirhan lalala
    Alikhan lala
    Slava Sonya
    Alikhan lalala
    */
    for(int i=0;i<k;i++){
        cin>>login>>password;

        for(it=m.begin();it!=m.end();it++){
            if(login!=it->first && password!=it->second){
               
                
            }if(login==it->first && password!=it->second){
                cout<<"password error"<<endl;
                break;
            }if(login!=it->first && password==it->second){
                cout<<"login error"<<endl;
                break;
            }else if(login==it->first && password==it->second){
                cout<<"correct password"<<endl;
                break;
            }
        }
    }
    return 0;
}