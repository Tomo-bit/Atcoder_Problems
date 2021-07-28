#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 10);
    vector<ll> b(n + 10);
    ll ans = 0;
    rep(i, n) cin >> a[i + 1];
    rep(i, n - 1)
    {
        b[i + 1] = a[i + 2] - a[i + 1];
        ans += abs(b[i + 1]);
    }
    rep(i, q)
    {
        ll l, r, v;
        cin >> l >> r >> v;
        ll mae = abs(b[l - 1]) + abs(b[r]);
        if (l >= 2)
            b[l - 1] += v;
        if (r <= n - 1)
            b[r] -= v;
        ll ato = abs(b[l - 1]) + abs(b[r]);
        ans += (ato - mae);

        cout << ans << endl;
    }
}
