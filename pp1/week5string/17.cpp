// сколько раз строка встречается в другой строке
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;

    getline(cin, s);

    string x;
    cin>>x;    
    size_t cnt=0;
    size_t pos=0;

    do{
        pos=s.find(x, pos);
        if(pos != string::npos){
            cnt++;
            pos=1+pos;
        }
    }while(pos!=string::npos);

    cout<<cnt<<endl;

    return 0;
}