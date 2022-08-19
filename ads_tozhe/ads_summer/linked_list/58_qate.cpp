#include <iostream>

using namespace std;

struct queue{
    int a[1000000];
    int frontIndex;
    int aldy;
    queue(){
        frontIndex = -1;
        aldy = -1;
    }
    void push(int n){
        a[frontIndex+1]=n;
        frontIndex++;
        cout<<"ok"<<endl;
    }
    void pop(){
        if(aldy < frontIndex){
            cout<<a[aldy+1]<<endl;
            aldy++;
        }
        else cout<<"error"<<endl;
    }
    int front(){
        if (aldy < frontIndex){ 
            return a[aldy+1];
            aldy++;
        }
        else return -1;
    }
    int size(){
        return abs(frontIndex - aldy) ;
    }
    void clear(){
        frontIndex = -1;
        aldy = -1;
        cout<<"ok"<<endl;
    }
};

int main(){
    // freopen("a.txt","r",stdin); 
    queue qq;
    string s;
    int n;
    while(cin>>s){
        // cin>>s;
        if(s=="push"){
            cin>>n;
            qq.push(n);
        }else if(s=="pop"){
            qq.pop();
        }else if(s=="front"){
            if(qq.front()!=-1){
                cout<<qq.front()<<endl;
            }else{
                cout<<"error"<<endl;
            }
        }else if(s=="size"){
            cout<<qq.size()<<endl;
        }else if(s=="clear"){
            qq.clear();
        }else if(s=="exit"){
            cout<<"bye";
            return 0;
        }
    }
    
    return 0;
}