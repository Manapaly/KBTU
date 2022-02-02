#include<iostream>
using namespace std;
int main()
{
    int num, i, j, res;

    for(i=0; i<=10; i++)
    {
        num = i;

        for(j=0; j<=10; j++)
        {
            res = num*j;
            cout<<res<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}