#include <iostream>
using namespace std;
int main () {
	int x,y;
	cin>>x>>y;
	if(x>8 || y>8){
		cout<<"Impossible";
		return 0;
	}
	char a[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i==x and j==y){
				a[i][j]='1';
			}
			else if(i==x or y==j){
				a[i][j]='2';
			}
			else if(x+y==i+j){
				a[i][j]='2';
			}
			else if(x-y==i-j){
				a[i][j]='2';
			}
			else {
				a[i][j]='*';
			}
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}