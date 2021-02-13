#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, g, absmin, sum = 0;
    cin >> n >> l;
    absmin = abs(l);
    for (int i = 0; i < n; i++)
    {
        absmin = min(absmin, abs(l + i));
        if (absmin == abs(l + i))
        {
            g = l + i;
        }
        sum += l + i;
    }
    sum -= g;

    cout << sum << endl;
}
