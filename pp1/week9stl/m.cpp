#include <iostream>
#include <queue>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int x;
    string name;
    queue<string> q;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            cin>>name;
            q.push(name);
            cout<<q.front()<<endl;
        }else{
            q.pop();
            if(q.empty()){
                cout<<"queue is empty"<<endl;
            }else{
                cout<<q.front()<<endl;
            }
        }
    }
    return 0;
}