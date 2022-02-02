#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    stack<int> s;
    stack<int> s2;
    char c;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c>='0' && c<='9'){
            s.push(c-48);
            s2.push(c-48);
        }else if(c=='C'){
            s.pop();
            s2.pop();
        }else if(c=='D'){
            s2.push(2*s.top());
            s.push(2*s.top());
        }else if(c=='+'){
            sum=sum+s.top();
            s.pop();
            sum=sum+s.top();
            s2.push(sum);
        }
    }
    int summ=0;
    while(!s2.empty()){
        summ+=s2.top();
        s2.pop();
    }
    cout<<summ;
    return 0;
}