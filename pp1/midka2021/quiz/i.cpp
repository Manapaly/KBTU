#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s;
    cin>>s;
    int cntR=0;
    int cntL=0;
    int cntF=0;
    int cntB=0;
    int cntX=0;
    int cntY=0;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            cntR++;
        }
        if(s[i]=='L'){
            cntL++;
        }
        if(s[i]=='F'){
            cntF++;
        }
        if(s[i]=='B'){
            cntB++;
        }
    }
    cntX=cntR-cntL;
    cntY=cntF-cntB;
    if(cntY>0){
        for(int i=0;i<abs(cntY);i++){
            cout<<"B";
        }
    }else if(cntY<0){
        for(int i=0;i<abs(cntY);i++){
            cout<<"F";
        }
    }else if(cntY==0){
        //continue;
    }

    if(cntX>0){
        for(int i=0;i<abs(cntX);i++){
            cout<<"L";
        }
    }else if(cntX<0){
        for(int i=0;i<abs(cntX);i++){
            cout<<"R";
        }
    }else if(cntX==0){
        //continue;
    }
    
    return 0;
}