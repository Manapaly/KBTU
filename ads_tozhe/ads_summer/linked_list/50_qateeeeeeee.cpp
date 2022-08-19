#include <iostream>

using namespace std;


struct st{
    int a[100000];
    int topIndex;
    st(){
        topIndex = -1;
    }

    int top(){
        if(topIndex == -1) return -1;
        return a[0];
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
    
    void pop_top(){
        for(int i=0;i<topIndex;i++){
            a[i] = a[i+1];
        }
        if(topIndex != -1){
            topIndex--;
        }
    }
    void print(){
        for(int i=0;i<=topIndex;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
    freopen("input.txt","r",stdin); 
    st s1;
    st s2;
    int n;
    for(int i=0;i<5;i++){
        cin>>n;
        s1.push(n);
    }
    for(int i=0;i<5;i++){
        cin>>n;
        s2.push(n);
    }
    // s1.print();
    // cout<<s1.top()<<endl;
    // s1.pop_top();
    // s1.push(1515);
    // s1.print();
    int cnt = 0;
    while(s1.size()>0 || s2.size()>0){
        if(s1.top()==9 && s2.top()==0){
            s2.push(0);
            s2.push(9);
            s1.pop_top();
            s2.pop_top();
            cnt++;
            cout<<cnt<<endl;
            continue;
        }
        if(s1.top()==0 && s2.top()==9){
            s1.push(0);
            s2.push(9);
            s2.pop_top();
            s1.pop_top();
            cnt++;
            cout<<cnt<<endl;
            continue;
        }
        if(s1.top()>s2.top() ){
            s1.push(s1.top());
            s1.push(s2.top());
            s1.pop_top();
            s2.pop_top();
            cnt++;
            cout<<cnt<<endl;
            continue;
        }else if(s1.top()<s2.top()){
            s2.push(s2.top());
            s2.push(s1.top());
            s2.pop_top();
            s1.pop_top();
            cnt++;
            cout<<cnt<<endl;
            continue;
        }
    }
    cout<<cnt;

    
    return 0;
}