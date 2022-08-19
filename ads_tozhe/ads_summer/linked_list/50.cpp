#include <iostream>

using namespace std;


struct st{
    char a[100000];
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
    void push(char x){
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
    st s1;
    st s2;
    string str;
    cin>>str;
  
    
    return 0;
}