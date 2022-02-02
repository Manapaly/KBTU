#include <iostream>

using namespace std;

int kbit(int a,int n){
for(int i=0;i<n;i++){
    a/=2;
    }
    return a%2;
    }
    

int main() {
  int a,n,b,k;
  cin>>a>>n>>b>>k;
  if(kbit(a,n)==kbit(b,k))
  cout<<"Thunderclap and Flash!";
  else cout<<"Thunder Breathing... First form...";
  return 0;
}