#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k, n;
    cin >> k >> n;
    vector<int> a(n * 2);
    rep(i, n)
    {
        cin >> a[i];
        a[i + n] = a[i] + k;
    }
    sort(a.begin(), a.end());
    int m = a[1] - a[0];
    for (int i = 0; i < n * 2 - 1; i++)
    {
        m = max(m, a[i + 1] - a[i]);
    }
    int ans = k - m;
    cout << ans << endl;
}
