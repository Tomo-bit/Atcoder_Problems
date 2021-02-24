#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll e = (a - 1) / c;
    ll f = b / c;
    ll g = (a - 1) / d;
    ll h = (b / d);
    ll k = lcm(c, d);
    ll i = (a - 1) / k;
    ll j = (b / k);
    ll ans = b - a + 1 - (f - e + h - g) + (j - i);
    cout << ans << endl;
}
