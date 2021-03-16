#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll sum = 0;
    rep(i, n) sum += a[i];
    int f = 0;
    int id = 1;
    rep(j, (n - 1) / 2)
    {
        if (id >= n)
            id -= n;
        f += 2 * a[id];

        id += 2;
    }
    int ans = sum - f;
    cout << ans << endl;
    rep(i, n - 1)
    {
        ans = 2 * a[i] - ans;
        cout << ans << endl;
    }
}
