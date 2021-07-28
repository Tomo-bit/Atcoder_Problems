#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

ll f[1000000], rf[1000000];
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
    for (int i = 1; i < 1000000; i++)
        f[i] = (f[i - 1] * i) % mod;
    rep(i, 1000000) rf[i] = inv(f[i]);
}
ll C(int n, int k)
{
    ll a = f[n];      // = n!
    ll b = rf[n - k]; // = (n-k)!
    ll c = rf[k];     // = k!

    ll bc = (b * c) % mod;

    return (a * bc) % mod;
}
int main()
{
    init();
    int X, Y;
    cin >> X >> Y;
    rep(a, X + 1)
    {
        int b = X - a;
        if (b % 2 == 1)
            continue;

        b /= 2;
        if (2 * a + b == Y)
        {
            cout << C(a + b, a) << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}
