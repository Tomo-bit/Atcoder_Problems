#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = max({b * d, b * c, a * c, a * d});
    cout << ans << endl;
}
