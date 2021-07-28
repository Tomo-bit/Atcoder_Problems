#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    ll n;
    cin >> n;
    vector<ll> xs(n), ys(n);
    rep(i, n)
    {
        ll x, y;
        cin >> x >> y;
        ll X = x - y;
        ll Y = x + y;
        xs[i] = X;
        ys[i] = Y;
    }
    ll xmax = *max_element(xs.begin(), xs.end());
    ll xmin = *min_element(xs.begin(), xs.end());
    ll ymax = *max_element(ys.begin(), ys.end());
    ll ymin = *min_element(ys.begin(), ys.end());
    ll ans = 0;
    ans = max(ans, xmax - xmin);
    ans = max(ans, ymax - ymin);
    cout << ans << endl;
}
