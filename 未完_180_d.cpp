#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, a, b, e;
    cin >> x >> y >> a >> b;
    e = 0;
    while (x < y)
    {
        if (
            x * (a - 1) < b)
        {
            x *= a;
        }
        else
        {
            x += b;
        }
        e += 1;
    }
    cout << e - 1 << endl;
}
