#include <bits/stdc++.h>

using namespace std;
float a[10];
float b[10];

int main(){
    float sum = 0;
    float res = 0;
    float sum1 = 0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        sum1 += a[i];
    }
    for(int i=0;i<10;i++){
        cin>>b[i];
        sum += b[i];
    }
    for(int i=0;i<10;i++){
        res = res + (((b[i]-float(sum/10))*(b[i]-float(sum/10))*a[i])/sum1);
        cout<<b[i]<< " " << a[i] << endl;
    }
    cout<<endl<<sum/10 << " " <<sqrt(res);
    return 0;
}