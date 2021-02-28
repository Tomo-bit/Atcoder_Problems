#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, m, x;
    cin >> n >> m >> x;
    vector<vector<ll>> data(n, vector<ll>(m + 1));
    ll ans = 100000000000;
    rep(i, n) rep(j, m + 1) cin >> data[i][j];
    rep(i, 1 << n)
    {
        ll r = 0;
        ll price = 0;
        vector<ll> scores(m, 0);
        rep(j, n)
        {
            if (i >> j & 1)
            {
                price += data[j][0];
                for (int k = 1; k < m + 1; k++)
                {
                    scores[k - 1] += data[j][k];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (scores[i] >= x)
                r++;
        }
        if (r == m)
            ans = min(ans, price);
    }
    if (ans == 100000000000)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
