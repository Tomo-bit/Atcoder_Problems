#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    rep(i, 200)
    {
        mp[i] = 0;
    }
    rep(i, n)
    {
        ll a;
        cin >> a;
        a %= 200;
        mp[a]++;
    }
    ll ans = 0;
    rep(i, 200)
    {
        if (mp[i] >= 2)
            ans += mp[i] * (mp[i] - 1) / 2;
    }
    cout << ans << endl;
}
