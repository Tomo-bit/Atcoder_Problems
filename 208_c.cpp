#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll r = k / n;
    ll e = k % n;
    vector<ll> b = a;
    sort(a.begin(), a.end());
    if (e >= 1)
    {
        ll d = a[e - 1];
        rep(i, n)
        {
            if (b[i] <= d)
                cout << r + 1 << endl;
            else
                cout << r << endl;
        }
    }
    else
    {
        rep(i, n) cout << r << endl;
    }
}
