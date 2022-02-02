#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    string s;
    string s1="push";
    string s2="pop";
    string s3="size";
    string s4="front";
    queue <int> q;
    while(n--){
        cin>>s;
        if(s==s1){
            cin>>k;
            q.push(k);
            cout<<"ok"<<endl;
        }else if(s==s2){
            q.pop();
        }else if(s==s3){
            cout<<q.size()<<endl;
        }else if(s==s4){
            cout<<q.front();
        }
    }
    return 0;
}