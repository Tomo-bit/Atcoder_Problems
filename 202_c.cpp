#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    ll ans = 0;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    map<int, int> mp;
    rep(i, n) mp[b[c[i] - 1]]++;
    rep(i, n)
    {
        ans += mp[a[i]];
    }
    cout << ans << endl;
}
