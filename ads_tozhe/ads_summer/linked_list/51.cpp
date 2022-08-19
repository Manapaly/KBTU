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
        return a[topIndex];
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
    st s;
    string str;
    cin>>str;
  

    bool result = true;
    for(int i = 0; i < str.size() ; i++){
        if(str[i] == '{' || str[i] == '[' || str[i] == '(' ){
            s.push(str[i]);
        }else{
            if(s.size()==0){
                result = false;
                break;
            }else{
                if(str[i] == ')' && s.top() != '('){
                    result = false;
                    break;
                }
                else if(str[i] == ']' && s.top() != '['){
                    result = false;
                    break;
                }else if(str[i] == '}' && s.top() != '{'){
                    result = false;
                    break;
                }
                s.pop();
            }
        }
    }

    if(result == false || s.size()!=0){
        cout << "no";
    }else{
        cout << "yes";
    }

    
    return 0;
}