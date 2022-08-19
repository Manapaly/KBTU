#include <iostream>

using namespace std;


struct st{
    int a[10000];
    int topIndex;
    st(){
        topIndex = -1;
    }

    int back(){
        if(topIndex == -1) return -1;
        return a[topIndex];
    }
    int size(){
        return topIndex+1;
    }
    void push(int x){
        topIndex++;
        a[topIndex] = x;
    }
    void clear(){
        topIndex = -1;
    }
    void pop(){
        if(topIndex != -1){
            topIndex--;
        }
    }
    string exit(){
        return "bye";
    }
};


int main(){
    // freopen("a.txt","r",stdin); 
    st s;
    string ss;
    int k;

    while(cin>>ss){
        if (ss=="size"){
            cout<<s.size()<<endl;
        }else if(ss=="push"){
            cin>>k;
            s.push(k);
            cout<<"ok"<<endl;
        }else if(ss=="pop"){
            if (s.back()!=-1){
                cout<<s.back()<<endl;
                s.pop();
            }else{
                cout<<"error"<<endl;
            }
            
        }else if(ss=="back"){
            if(s.size()!=0){
                cout<<s.back()<<endl;
            }else{
                cout<<"error"<<endl;
            }
        }else if(ss=="clear"){
            s.clear();
            cout<<"ok"<<endl;
        }else if(ss=="exit"){
            cout<<"bye";
            break;
        }
    }


   

    return 0;
}