#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> v(n, 0);
    vector<ll> d(n, 0);
    map<ll, ll> mp;
    rep(i, n)
    {
        ll b;
        cin >> b;
        a[i] = b;
        mp[b]++;
    }
    ll sum = 0;
    for (auto p : mp)
    {
        v[p.first] = p.second * (p.second - 1) / 2;
        sum += v[p.first];
        if (p.second != 0)
            d[p.first] = (p.second - 1) * (p.second - 2) / 2;
    }
    rep(i, n)
    {
        ll sum_1 = sum;
        sum_1 -= v[a[i]];
        sum_1 += d[a[i]];
        cout << sum_1 << endl;
    }
}
