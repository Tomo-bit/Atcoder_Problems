#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<ll> v(n);
    ll c1 = 0, c2 = 0, c3 = 0;
    rep(i, n)
    {
        if (s[i] == 'R')
        {
            v[i] = 1;
            c1++;
        }
        if (s[i] == 'G')
        {
            v[i] = 2;
            c2++;
        }
        if (s[i] == 'B')
        {
            v[i] = 3;
            c3++;
        }
    }
    ll ans = c1 * c2 * c3;
    for (int i = 0; i <= n - 3; i++)
        for (int j = i + 1; j <= n - 2; j++)
        {
            if (2 * j - i <= n - 1)
            {
                if (v[i] == v[j])
                    continue;
                if (v[j] == v[2 * j - i])
                    continue;
                if (v[2 * j - i] == v[i])
                    continue;
                ans--;
            }
        }

    cout << ans << endl;
}
