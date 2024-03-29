#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w)), b(h, vector<ll>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    rep(i, h) rep(j, w) cin >> b[i][j];
    ll ans = 0;
    rep(i, h - 1)
    {
        rep(j, w - 1)
        {
            ll d = b[i][j] - a[i][j];
            a[i][j] += d;
            a[i + 1][j] += d;
            a[i][j + 1] += d;
            a[i + 1][j + 1] += d;
            ans += abs(d);
        }
    }
    if (a == b)
    {
        cout << "Yes" << endl;
        cout << ans << endl;
    }
    else
        cout << "No" << endl;
}
