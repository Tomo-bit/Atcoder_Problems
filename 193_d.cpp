#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll k;
    string s, t;
    cin >> k >> s >> t;
    vector<ll> card(9, k);
    vector<ll> takahashi(9, 0);
    vector<ll> aoki(9, 0);

    rep(i, 4)
    {
        card[s[i] - '0' - 1]--;
        takahashi[s[i] - '0' - 1]++;
        card[t[i] - '0' - 1]--;
        aoki[t[i] - '0' - 1]++;
    }
    ll p = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            ll score_t = 0, score_a = 0;
            vector<ll> takahashi_1 = takahashi;
            vector<ll> aoki_1 = aoki;
            takahashi_1[i]++;
            aoki_1[j]++;
            rep(k, 9)
            {
                ll x = 1;
                rep(e, takahashi_1[k]) x *= 10;
                score_t += (k + 1) * x;
                ll y = 1;
                rep(e, aoki_1[k]) y *= 10;
                score_a += (k + 1) * y;
            }
            if (score_t > score_a)
            {
                if (i != j)
                {
                    if (card[i] > 0 && card[j] > 0)
                    {
                        p += (ll)card[i] * card[j];
                    }
                }
                if (i == j)
                {
                    if (card[i] > 1)
                    {
                        p += (ll)card[i] * (card[i] - 1);
                    }
                }
            }
        }
    }
    ll tot = (9 * k - 8) * (9 * k - 9);
    double ans = (double)p / tot;
    cout << std::fixed << std::setprecision(15) << ans << endl;
}
