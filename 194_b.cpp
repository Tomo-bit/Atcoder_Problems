#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }
    int ans_1 = v[0].first + v[0].second;
    rep(i, n)
    {
        ans_1 = min(ans_1, v[i].first + v[i].second);
    }
    int ans_2 = 300000;
    int m;
    rep(i, n)
    {
        m = 1000000;
        rep(j, n)
        {

            if (j != i)
                m = min(m, v[j].second);
        }
        ans_2 = min(ans_2, max(v[i].first, m));
    }
    int ans = min(ans_1, ans_2);
    cout << ans << endl;
}
