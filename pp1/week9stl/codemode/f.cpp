#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    int n,x;
    string car;
    queue<string> want;
    queue<string> have;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>car;
        have.push(car);
    }
    cin>>x;
    for(int j=0;j<x;j++){
        cin>>car;
        want.push(car);
    }
    int cnt=0;
    while(!want.empty()){
        string one = want.front();
        string two = have.front();
        have.pop();
        if(one==two){
            want.pop();
            cnt++;
        }else{
            have.push(two);
            cnt++;
        }
        if(cnt>=14){
            cout<<"Shara is crying((";
            return 0;
        }
    }
    cout<<"Shara is dovolen in: "<<cnt<<" days";
    return 0;
}