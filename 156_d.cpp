#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

ll f[10000000], rf[10000000];
ll inv(ll x)
{
    ll res = 1;
    ll k = mod - 2;
    ll y = x;
    while (k)
    {
        if (k & 1)
            res = (res * y) % mod;
        y = (y * y) % mod;
        k /= 2;
    }
    return res;
}
void init()
{
    f[0] = 1;
    for (int i = 1; i < 10000000; i++)
        f[i] = (f[i - 1] * i) % mod;
    rep(i, 10000000) rf[i] = inv(f[i]);
}
ll C(int n, int k)
{
    ll q = 1;
    for (int i = n; i >= n - k + 1; i--)
    {
        q *= i;
        q %= mod;
    }

    q *= rf[k];
    q %= mod;

    return q;
}
ll bb(ll m)
{
    ll a = 1, y = 2;
    ll v = m;
    while (v)
    {
        if (v & 1)
        {
            a *= y % mod;
        }
        y *= y % mod;
        v /= 2;
    }
    return a;
}

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    init();
    ll ans = bb(n);
    ans--;
    ans -= C(n, a);
    ans -= C(n, b);
    ans += mod;
    ans %= mod;

    cout << ans << endl;
}
