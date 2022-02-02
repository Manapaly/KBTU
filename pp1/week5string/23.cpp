#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s="49";                            //строкадагы сандарды қосу
    string t="1";

    int s1=0;
    int t1=0;
    int k=1;

    for(int i=s.size()-1;i>=0;i--){
        int d=int (s[i])-int ('0');
        s1=s1+d*k;
        k=k*10;
    }
    k=1;
    for(int j=t.size()-1;j>=0;j--){
        int g=int (t[j])-int ('0');
        t1=t1+g*k;
        k=k*10;
    }
    cout<<s1+t1;
    return 0;
}
