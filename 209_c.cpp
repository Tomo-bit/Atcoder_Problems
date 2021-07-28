#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> c(n);
    rep(i, n) cin >> c[i];
    sort(c.begin(), c.end());
    ll ans = 1;
    rep(i, n)
    {
        ans *= c[i] - i;
        ans %= 1000000007;
    }
    cout << ans << endl;
}
