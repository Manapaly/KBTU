#include <bits/stdc++.h>

using namespace std;

bool isLeapYear(int year){
   if (year % 4 != 0)
      return false;
   if (year % 100 != 0)
      return true;
   if (year % 400 == 0)
      return true;
   else
      return false;
}

int main(){
    int d,m,y;
    cin>>d>>m>>y;
    map<int,int> m;
    if(isLeapYear(y)){
    m[1]=31;
    m[2]=29;
    m[3]=31;
    m[4]=30;
    m[5]=31;
    m[6]=30;
    m[7]=31;
    m[8]=31;
    m[9]=30;
    m[10]=31;
    m[11]=30;
    m[12]=31;
    }else{
    m[1]=31;
    m[2]=28;
    m[3]=31;
    m[4]=30;
    m[5]=31;
    m[6]=30;
    m[7]=31;
    m[8]=31;
    m[9]=30;
    m[10]=31;
    m[11]=30;
    m[12]=31;
    }
    map<int,pair<int,int> > mm;
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        mm.insert(make_pair(y,make_pair((*it).first,(*it).second)));
    }
    map<int,pair<int,int> > :: iterator it1;
    for(it1=mm.begin();it1!=mm.end();it1++){
        if(it1.second.second==d+1 
    }
    cout<<d<<" "<<m<<" "<<y;
    return 0;
}