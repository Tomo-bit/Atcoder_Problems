#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> dp(n, vector<ll>(n, 2 * n));
    rep(i, n - 1)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        dp[a][b] = 1;
        dp[b][a] = 1;
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
        }
    }
    rep(i, q)
    {
        ll c, d;
        cin >> c >> d;
        c--, d--;
        if (dp[c][d] % 2 == 0)
            cout << "Town" << endl;
        else
            cout << "Road" << endl;
    }
}
