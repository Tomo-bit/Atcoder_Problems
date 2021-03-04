#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll k = n / i;
        ans += i * k * (k + 1) / 2;
    }
    cout << ans << endl;
}
