#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> m;

    m.insert(make_pair("orange",40));
    m.insert(make_pair("orange",155));
    m.insert(make_pair("orange",404));
    m["apple"]=55;
    m["apple"]=20;
    m["apple"]=10;

    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first << " " << (*it).second<<endl;
    }
    return 0;
}