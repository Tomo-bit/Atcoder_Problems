#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m, q, l, r;
    cin >> n >> m >> q;
    ll ans;
    vector<pair<int, int>> pairs(n);
    vector<int> x(m);
    vector<int> xc(m);
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        pairs[i].first = b;
        pairs[i].second = a;
    }
    sort(pairs.rbegin(), pairs.rend());
    rep(i, m) cin >> x[i];
    rep(i, q)
    {
        ans = 0;
        cin >> l >> r;
        xc = x;
        xc.erase(xc.begin() + l - 1, xc.begin() + r);
        sort(xc.begin(), xc.end());
        rep(j, n)
        {
            rep(k, m - (r - l + 1))
            {
                if (pairs[j].second <= xc[k])
                {
                    ans += pairs[j].first;
                    xc[k] = -1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}
