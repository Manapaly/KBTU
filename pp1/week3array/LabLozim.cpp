#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
            int m;
            cin>>m;
            int b[m];
                for(int i=0;i<m;i++){
                    cin>>b[i];
                }
                    int d=n+m;
                    int e[d];
                    for(int i=0;i<n;i++){
                        e[i]=a[i];
                    }
                    for(int i=0;i<m;i++){
                        e[i+n]=b[i];
                    }
                    sort(e,e+n+m);
                    for(int i=0;i<n+m;i++){
                        cout<<e[i]<<" ";
                    }
    return 0;
}
