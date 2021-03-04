#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    set<ll> s;
    rep(i, n) cin >> a[i];
    ll d = 1;
    ll e = 1;
    ll cnt = 0;
    s.insert(d);
    ll f = 0;
    set<ll> c;
    while (true)
    {
        d = a[d - 1];
        cnt++;
        if (s.count(d))
        {
            c.insert(d);
            break;
        }
        s.insert(d);
    }
    while (true)
    {
        d = a[d - 1];
        f++;
        if (c.count(d))
        {
            break;
        }
    }
    if (k >= cnt - f)
    {
        k = (k - (cnt - f)) % f;
    }
    else
    {
        rep(i, k)
        {
            e = a[e - 1];
        }
        cout << e << endl;
        return 0;
    }

    rep(i, k + cnt - f)
    {
        e = a[e - 1];
    }

    cout << e << endl;
}
