#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, k;
    cin >> n;
    long double ans = 1;
    long long ansx;
    bool g = true;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (ans)
            if (k == 0)
            {
                cout << 0 << endl;
                return 0;
            }
        ans *= k;
        if (g && ans > 1000000000000000000)
        {
            g = false;
        }
    }
    if (!g)
    {
        cout << -1 << endl;
    }
    else
    {
        ansx = ans;
        cout << ansx << endl;
    }
}
