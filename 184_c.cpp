#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int x = r2 - r1;
    int y = c2 - c1;
    x = abs(x);
    y = abs(y);
    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if (x + y <= 3 || x == y)
    {
        cout << 1 << endl;
        return 0;
    }
    if (x + y <= 6)
    {
        cout << 2 << endl;
        return 0;
    }
    int k = x - y;
    if (k < 0)
    {
        k = -k;
    }
    if (k <= 3)
    {
        cout << 2 << endl;
        return 0;
    }
    bool h = false;
    for (int i = 0; i < max(x, y); i++)
    {
        if (-(x - i) == (y - i))
        {
            h = true;
            break;
        }
    }
    if (h)
    {
        cout << 2 << endl;
        return 0;
    }
    cout << 3 << endl;
}
