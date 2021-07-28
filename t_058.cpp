#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll digit_sum(ll x)
{
    ll ans = 0;
    while (x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<bool> a(100000, false);
    vector<ll> b(100000);
    vector<ll> c(100000);
    for (ll i = 0; i <= 100000; i++)
    {
        ll s = digit_sum(n);
        n = (n + s) % 100000;
        b[i] = n;

        if (a[n] == true)
        {

            ll q = (k - i) % (i - c[n]);
            cout << b[q] << endl;
            return 0;
        }
        if (i == k - 1)
        {
            cout << n << endl;
            return 0;
        }
        a[n] = true;
        c[n] = i;
    }
}
