#include <iostream>
#include <string>
using namespace std;
int main () 
{

    string a, b;
    cin >> a >> b;
    int cnta = 0, cntb = 0;

    for (int i = 0; i < a.size(); i++)
    {
        cnta += a.at(i);
        cout<<cnta<<" ";
    }
    cout<<endl;
    for (int i = 0; i < b.size(); i++)
    {
        cntb += b.at(i);
        cout<<cntb<<" ";
    }

    // if (cnta == cntb) cout << "YES";
    // else cout << "NO";


    return 0;
}