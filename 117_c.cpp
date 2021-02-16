#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    vector<int> v(m - 1);
    rep(i, m)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    rep(i, m - 1)
    {
        v[i] = x[i + 1] - x[i];
    }
    sort(v.begin(), v.end());
    rep(i, n - 1)
    {
        v.pop_back();
    }

    int ans = 0;
    rep(i, m - 1 - n + 1)
    {
        ans += v[i];
    }
    cout << ans << endl;
}
