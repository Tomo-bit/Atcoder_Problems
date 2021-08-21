#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    ll n;
    cin >> n;
    vector<ll> s(n), t(n);
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];
    vector<ll> sum(n);
    rep(i, 2 * n)
    {
        t[(i + 1) % n] = min(t[(i + 1) % n], t[i % n] + s[i % n]);
    }
    for (ll ans : t)
        cout << ans << endl;
}
