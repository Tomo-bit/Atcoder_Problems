#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    rep(i, n)
    {
        ans += abs(a[i] - b[i]);
    }
    cout << ans << endl;
}
