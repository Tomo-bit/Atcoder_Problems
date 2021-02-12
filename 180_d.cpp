#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long x, y, a, b, e = 0;
    cin >> x >> y >> a >> b;
    while (x < y)
    {

        if (x * (a - 1) < b)
        {
            x *= a;
            if (x < y)
            {
                e += 1;
            }
        }
        else
        {
            if ((y - x) % b == 0)
            {
                e += (y - x) / b;
                e -= 1;
            }
            else
            {
                e += (y - x) / b;
            }
            break;
        }
        /*19-31行は
        else
        {
            e += (y - 1 - x) / b;
            break;
        }
        でもよい
        */
    }
    cout << e << endl;
}
