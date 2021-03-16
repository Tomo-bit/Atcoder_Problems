#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> s;
    ll r = 0;
    rep(i, n)
    {
        int f;
        cin >> f;
        mp[i + 1] = f;
    }
    for (int a = 1; a <= n; a++)
    {
        set<int> t;
        t.clear();
        if (s.count(a))
            continue;
        s.insert(a);
        t.insert(a);
        while (true)
        {
            a = mp[a];
            if (t.count(a))
            {
                r++;
                t.clear();
                break;
            }
            else if (s.count(a))
                break;
            s.insert(a);
            t.insert(a);
        }
    }
    ll ans = 1;
    rep(i, r)
    {
        ans *= 2;
        ans %= 998244353;
    }

    cout << ans - 1 << endl;
}
