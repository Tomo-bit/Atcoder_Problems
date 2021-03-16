#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n);
    rep(i, n + 1) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll ans = 0;
    rep(i, n)
    {
        int d = min(a[i], b[i]);
        a[i] -= d;
        b[i] -= d;
        ans += d;
        int e = min(a[i + 1], b[i]);
        a[i + 1] -= e;
        b[i] -= e;
        ans += e;
    }
    cout << ans << endl;
}
