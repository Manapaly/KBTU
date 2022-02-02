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
			a[i][j]='*';
            a[x][j]='2';
            a[i][y]='2';
            if(i-j==x-y){
                a[i][j]='2';
            }else if(i+j==x+y){
                a[i][j]='2';
            }
            a[x][y]='1';
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