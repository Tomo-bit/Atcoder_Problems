#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a_1(n);
    rep(i, n) cin >> a_1[i];
    ll ans = 200000000;
    for (int i = 0; i <= n - m; i++)
    {
        vector<ll> a;
        copy(a_1.begin() + i, a_1.begin() + i + m, back_inserter(a));
        sort(a.begin(), a.end());
        bool g = true;
        ll k = 0;
        if (a[0] > 0)
        {
            ans = min(ans, (ll)0);
        }
        for (int j = 1; j < m; j++)
        {

            if (a[j] - a[j - 1] > 1)
            {

                ans = min(ans, a[j - 1] + 1);
                g = false;
            }
            k++;
        }
        if (g)
        {

            ans = min(ans, a[m - 1] + 1);
        }
    }
    cout << ans << endl;
}
