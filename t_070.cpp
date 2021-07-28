#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> xs(n), ys(n);
    rep(i, n)
    {
        cin >> xs[i] >> ys[i];
    }
    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());
    ll midx = xs[n / 2], midy = ys[n / 2];
    ll ans = 0;
    rep(i, n) ans += abs(xs[i] - midx);
    rep(i, n) ans += abs(ys[i] - midy);
    cout << ans << endl;
}
