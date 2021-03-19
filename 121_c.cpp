#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p(n);
    rep(i, n)
    {
        cin >> p[i].first >> p[i].second;
    }
    ll q = 0;
    int cnt = 0;
    sort(p.begin(), p.end());
    rep(i, n)
    {
        rep(j, p[i].second)
        {
            q += p[i].first;
            cnt++;
            if (cnt == m)
            {
                cout << q << endl;
                return 0;
            }
        }
    }
}
