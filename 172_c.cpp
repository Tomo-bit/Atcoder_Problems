#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, m)
    {
        cin >> b[i];
    }
    ll time = 0;
    ll i = 0, j = 0, ans = 0;
    while (time <= k && i <= n - 1 && j <= m - 1)
    {
        if (a[i] < b[j])
        {
            time += a[i];
            i++;
        }
        else
        {
            time += b[j];
            j++;
        }
        ans++;
    }
    if (time <= k && i <= n - 1)
    {
        ans--;
    }
    while (time <= k && i <= n - 1)
    {
        time += a[i];
        i++;
        ans++;
    }
    if (time <= k && j <= m - 1)
    {
        ans--;
    }
    while (time <= k && j <= m - 1)
    {
        time += b[j];
        j++;
        ans++;
    }
    ans--;
    cout << ans << endl;
}
