#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<double> p(n);
    rep(i, n) cin >> p[i];
    double ans = 0;
    double g = 0;
    for (int i = 0; i < k; i++)
    {
        g += (p[i] + 1) / 2;
    }
    ans = g;
    for (int i = 0; i < n - k; i++)
    {
        g -= (p[i] + 1) / 2;
        g += (p[i + k] + 1) / 2;
        ans = max(ans, g);
    }
    cout << std::fixed << std::setprecision(15) << ans << endl;
}
