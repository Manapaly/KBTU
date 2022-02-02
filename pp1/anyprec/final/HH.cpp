#include <bits/stdc++.h>
using namespace std;
bool isLeapYear(int year){
   if(year % 4 != 0) return false;
   if(year % 100 != 0) return true;
   if(year % 400 == 0) return true;
   else return false;
}
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    if(isLeapYear(y)){
        if(m==2 && d==29){
            d=1;
            m=3;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==12 && d==31){
            d=1;
            m=1;
            y=y+1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==1 && d==31){
            m=2;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==3 && d==31){
            m=4;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==4 && d==30){
            m=5;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==5 && d==31){
            m=6;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==7 && d==31){
            m=8;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==8 && d==31){
            m=9;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==9 && d==30){
            m=10;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==6 && d==30){
            m=7;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==10 && d==31){
            m=1;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==11 && d==30){
            m=12;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==12 && d==31){
            d=1;
            m=1;
            y=y+1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }
        d=d+1;
    }else{
        if(m==2 && d==28){
            d=1;
            m=3;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==12 && d==31){
            d=1;
            m=1;
            y=y+1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==1 && d==31){
            m=2;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==1 && d==31){
            m=2;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==3 && d==31){
            m=4;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==4 && d==30){
            m=5;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==5 && d==31){
            m=6;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==7 && d==31){
            m=8;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==8 && d==31){
            m=9;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==9 && d==30){
            m=10;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==6 && d==30){
            m=7;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==10 && d==31){
            m=1;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }else if(m==11 && d==30){
            m=12;
            d=1;
            cout<<d<<" "<<m<<" "<<y;
            return 0;
        }
        d=d+1;
    }  
    cout<<d<<" "<<m<<" "<<y;
    return 0;
}