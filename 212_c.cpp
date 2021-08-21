#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, m)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 100000000009;
    rep(i, n)
    {
        auto q = lower_bound(b.begin(), b.end(), a[i]);
        if (q - b.begin() >= 1)
            ans = min(ans, min(abs(a[i] - *q), abs(a[i] - *(q - 1))));
        else if (q - b.begin() == 0)
            ans = min(ans, abs(a[i] - *q));
    }
    cout << ans << endl;
}
