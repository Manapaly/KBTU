#include <iostream>

using namespace std;

int main(){
    string a[100];
    for(int i=0;i<100;i++){
        a[i]="0";
    }
    int i=0;
    string s;
    while(getline(cin, s)){
        a[i]=s;
        i++;
    }
    string max="";
    i=0;
    while(a[i]=="0"){
        if(a[i].size()>max.size()){
            max=a[i];
        }
    }
    cout<<max<<endl;
    cout<<max.size();
   return 0;
}