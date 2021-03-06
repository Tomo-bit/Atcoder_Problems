#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll sum = 0;
    rep(i, n) sum += a[i];
    ll ans = 0;
    rep(i, n)
    {
        ans += (n - 1) * a[i] * a[i];
        sum -= a[i];
        ans -= 2 * a[i] * sum;
    }
    cout << ans << endl;
}
