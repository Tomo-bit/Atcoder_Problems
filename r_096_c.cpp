#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll ans1 = c * 2 * max(x, y);
    ll ans2 = a * x + b * y;
    ll ans3 = c * 2 * min(x, y) + a * (x - min(x, y)) + b * (y - min(x, y));
    ll ans = min({ans1, ans2, ans3});
    cout << ans << endl;
}
