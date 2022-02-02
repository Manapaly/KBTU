#include <bits/stdc++.h>
using namespace std;

bool valid(string s, int n)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (48 <= s.at(i) && s.at(i) <= 57)
        {
            cnt++;
        }
    }
    if (cnt >= n) return true;
    else return false;
}

int main()
{

    string a;
    int b;
    cin >> a >> b;

    valid(a, b)? cout << "YES" : cout << "NO";


    return 0;
}