#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, k, d, a, ans, ans1, ans2;
    cin >> x >> k >> d;
    if (x < 0)
    {
        x = -x;
    }
    a = x / d;
    long long num;
    if (k <= a)
    {
        num = k;
        ans = x - d * num;
    }

    if (k >= a + 1)
    {
        if ((k - a) % 2 == 0)
        {
            ans = x - d * a;
        }
        if ((k - a) % 2 == 1)
            ans = -(x - d * (a + 1));
    }

    cout << ans << endl;
}
