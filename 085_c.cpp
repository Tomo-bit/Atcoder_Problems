#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, y;
    cin >> n >> y;
    ll ans;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            ans = 1000 * i + 5000 * j + 10000 * (n - i - j);
            if (ans == y)
            {
                cout << n - i - j << " " << j << " " << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
