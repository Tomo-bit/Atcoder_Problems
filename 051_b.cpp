#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = x; y <= k; y++)
        {
            if (x + y <= s && s - x - y >= y && s - x - y <= k)
            {
                int z = s - x - y;
                if (x == y && y == z)
                    ans++;
                else if (x != y && y != z && z != x)
                    ans += 6;
                else
                    ans += 3;
            }
        }
    }
    cout << ans << endl;
}
