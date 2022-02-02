#include <iostream>
using namespace std;

int main ()
{

    int a, cnt = 1;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i + j == a - 1)
            {
                cout << cnt++;
            } else cout << '.';
        }
        cout << endl;
    }
    return 0;
}