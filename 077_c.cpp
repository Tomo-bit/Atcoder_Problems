#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    ll sum = 0;

    rep(i, n)
    {
        auto k = lower_bound(a.begin(), a.end(), b[i]);
        ll indexk = distance(a.begin(), k);
        if (a[indexk - 1] == b[i])
            indexk--;

        auto l = lower_bound(c.begin(), c.end(), b[i] + 1);
        ll indexl = distance(l, c.end());
        sum += indexk * indexl;
    }
    cout << sum << endl;
}
