#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll r, x, y;
    cin >> r >> x >> y;
    ll d = x * x + y * y;
    ll ans = 0;
    while (d > ans * ans * r * r)
    {
        ans++;
    }
    if (d < r * r)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
