#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, a, b, c, d, e;
    cin >> n >> a >> b >> c >> d >> e;
    ll m = min({a, b, c, d, e});
    ll ans = 4 + (n + m - 1) / m;
    cout << ans << endl;
}
