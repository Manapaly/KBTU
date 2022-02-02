#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map <string, int> m;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        ++m[s];
        if(m[s] == 1) 
        {
            cout << "new user added" << endl;
        } 
        else if(m[s] > 1)
        {
            cout << "user already exists" << endl;
        }
    }
    
    return 0;
}