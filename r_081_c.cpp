#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    set<ll> s;
    set<ll> t;
    rep(i, n)
    {
        ll a;
        cin >> a;
        m[a]++;
        if (m[a] >= 2)
        {
            s.insert(a);
        }
        if (m[a] >= 4)
        {
            t.insert(a);
        }
    }
    if (s.size() < 2)
    {
        cout << 0 << endl;
        return 0;
    }
    ll max1 = *rbegin(s);
    s.erase(max1);
    ll max2 = *rbegin(s);
    ll ans1 = max1 * max2;
    ll ans2 = 0;
    if (!t.empty())
    {
        ll d = *rbegin(t);
        ans2 = d * d;
    }
    ll ans = max(ans1, ans2);
    cout << ans << endl;
}
