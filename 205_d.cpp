#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> c(n);
    rep(i, n)
    {
        ll b;
        cin >> b;
        a[i] = b;
        c[i] = b - i - 1;
    }
    rep(i, q)
    {
        ll k;
        cin >> k;
        if (c[n - 1] < k)
        {
            cout << a[n - 1] + k - c[n - 1] << endl;
            continue;
        }
        else
        {
            ll id = lower_bound(c.begin(), c.end(), k) - c.begin();
            cout << a[id] - c[id] + k - 1 << endl;
        }
    }
}
