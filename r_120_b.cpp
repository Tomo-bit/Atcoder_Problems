#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    ll ans = 1;
    vector<string> s(h);
    rep(i, h)
    {
        cin >> s[i];
    }
    for (int sum = 0; sum < h + w - 1; sum++)
    {
        bool r = false, b = false;
        rep(j, w)
        {
            if (sum - j < 0 || sum - j >= h)
                continue;
            if (s[sum - j][j] == 'R')
                r = true;
            if (s[sum - j][j] == 'B')
                b = true;
        }
        if (r && b)
        {
            cout << 0 << endl;
            return 0;
        }
        if (!r && !b)
        {
            ans *= 2;
            ans %= 998244353;
        }
    }
    cout << ans << endl;
}
