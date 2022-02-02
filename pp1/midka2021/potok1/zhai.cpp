#include <bits\stdc++.h>
 

using namespace std;

string convertInt(int number)
{
    if (number == 0)
        return "0";
    string temp="";
    string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (int i=0;i<temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}

// int from8to10(int n){
//     string d;
//     d=convertInt(n)

//     int u=0;
//     for(int i=0;i<d.size();i++){
//         u=u+pow(d.at(i),d.size()-1);
//     }
    
//     return u;

// }

int main(){
    int n;
    cin>>n;
 
    string d;
    d=convertInt(n);

    int u=0;
    for(int i=0;i<d.size();i++){
        u=u+(char(d[i])-'0')*pow(8,d.size()-1-i);
    }

    string l;
    l=convertInt(u);
    while(u!=0){
        for(int i=0;i<l.size();i++){
            int k=u%16;
            // if(k==11) k="A";
            // if(k==12) k="B";
            // if(k==13) k="C";
            // if(k==14) k="D";
            // if(k==15) k="E";
            l[i]=k;
            u=u/16;
        }
    }
    cout<<l;
   
    return 0;
}