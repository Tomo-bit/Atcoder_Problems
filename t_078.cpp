#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);

    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    ll ans = 0;
    rep(i, n)
    {
        ll cnt = 0;
        for (int j : G[i])
        {
            if (j < i)
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
