#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> xs(n), ys(n);
    rep(i, n)
    {
        ll x, y;
        cin >> x >> y;
        ll X, Y;
        X = x - y;
        Y = x + y;
        xs[i] = X;
        ys[i] = Y;
    }
    ll xmax = *max_element(xs.begin(), xs.end());
    ll xmin = *min_element(xs.begin(), xs.end());
    ll ymax = *max_element(ys.begin(), ys.end());
    ll ymin = *min_element(ys.begin(), ys.end());
    rep(i, q)
    {
        ll k;
        cin >> k;
        ll x1, y1;
        x1 = xs[k - 1], y1 = ys[k - 1];

        ll ans = max({abs(x1 - xmax), abs(x1 - xmin), abs(y1 - ymax), abs(y1 - ymin)});
        cout << ans << endl;
    }
}
