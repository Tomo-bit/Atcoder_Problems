#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    vector<ll> max(n + 1);
    vector<ll> min(n + 1);
    for (ll i = 0; i < n + 1; i++)
    {
        max[i] = (n + n - i) * (i + 1) / 2;
        min[i] = i * (i + 1) / 2;
    }

    for (int i = k - 1; i < n + 1; i++)
    {
        ans += max[i] - min[i] + 1;
        ans %= 1000000007;
    }
    cout << ans << endl;
}
