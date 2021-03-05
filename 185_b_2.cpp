#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, m, t;
    cin >> n >> m >> t;
    ll max = n;
    vector<ll> a(m), b(m);
    rep(i, m)
    {
        cin >> a[i] >> b[i];
    }
    n -= a[0];
    if (n <= 0)
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < m - 1; i++)
    {
        n += b[i] - a[i];
        n = min(n, max);
        n -= a[i + 1] - b[i];
        if (n <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    n += b[m - 1] - a[m - 1];
    n = min(n, max);
    n -= t - b[m - 1];
    if (n <= 0)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
}
