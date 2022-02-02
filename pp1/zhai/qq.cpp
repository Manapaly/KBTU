#include <iostream>
using namespace std;

int main ()
{

    int a, p, q;
    int cnt = 0, mx = -1000000;
    cin >> a;
    int ar[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
            {
                if (ar[i][j] > mx)
                {
                    mx = ar[i][j];
                    p = i + 1; q = j + 1;
                }
            }
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: " << p << ";" << q;
    return 0;
}