#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, d;
    cin >> n >> d;
    ll ans = 0;
    rep(i, n)
    {
        ll x, y;
        cin >> x >> y;
        if ((x * x + y * y) <= d * d)
            ans++;
    }
    cout << ans << endl;
}
