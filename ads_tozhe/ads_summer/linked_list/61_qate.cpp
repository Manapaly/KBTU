#include <iostream>

using namespace std;

struct Dec{
    int a[100];
    int frontIndex;
    int center = 50;
    int backIndex;
    Dec(){
        frontIndex = -1;
        backIndex = -1;
    }
    void push_front(int n){
        if(frontIndex==-1 || backIndex==-1){
            a[50] = n;
            frontIndex = 50;
            backIndex = 50;
            cout<<"ok"<<endl;
        }else{
            a[frontIndex+1]=n;
            frontIndex++;
            cout<<"ok"<<endl;
        }
    }
    void push_back(int n){
        if(frontIndex==-1 || backIndex==-1){
            a[50] = n;
            frontIndex = 50;
            backIndex = 50;
            cout<<"ok"<<endl;
        }else{
            a[backIndex-1]=n;
            backIndex--;
            cout<<"ok"<<endl;
        }
    }
    void pop_back(){
        if(frontIndex==-1 || backIndex==-1){
            cout<<"error"<<endl;
        }else{
            cout<<a[backIndex]<<endl;
            backIndex++;
        }
    }
    void pop_front(){
        if(frontIndex==-1 || backIndex==-1){
            cout<<"error"<<endl;
        }else{
            cout<<a[frontIndex]<<endl;
            frontIndex--;
        }
    }
    int front(){
        if(frontIndex==-1 || backIndex==-1){
            return -1;
        }else{
            return a[frontIndex];
        }
    }
    int back(){
        if(frontIndex==-1 || backIndex==-1){
            return -1;
        }else{
            return a[backIndex];
        }
    }
    int size(){
        if(frontIndex==-1 || backIndex==-1)
            return 0;
        return frontIndex-backIndex+1;
    }
    void clear(){
        frontIndex = -1;
        backIndex = -1;
        cout<<"ok"<<endl;
    }
};

int main(){
    // freopen("a.txt","r",stdin); 

    Dec qq;
    string s;
    int n;
    while(s!="exit"){
        cin>>s;
        if(s=="push_front"){
            cin>>n;
            qq.push_front(n);
        }
        if(s=="push_back"){
            cin>>n;
            qq.push_back(n);
        }
        else if(s=="pop_front"){
            qq.pop_front();
        }
        else if(s=="pop_back"){
            qq.pop_back();
        }
        else if(s=="front"){
            if(qq.front()!=-1){
                cout<<qq.front()<<endl;
            }else{
                cout<<"error"<<endl;
            }
        }
        else if(s=="back"){
            if(qq.back()!=-1){
                cout<<qq.back()<<endl;
            }else{
                cout<<"error"<<endl;
            }
        }
        else if(s=="size"){
            cout<<qq.size()<<endl;
        }else if(s=="clear"){
            qq.clear();
        }
    }
    cout<<"bye";
    return 0;
}