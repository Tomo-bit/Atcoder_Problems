#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = abs(x - v[0]);

    for (int i = 1; i < n; i++)
    {
        ans = gcd(ans, v[i] - v[i - 1]);
    }
    cout << ans << endl;
}
