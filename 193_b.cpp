#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int ans = 1000000009;
    rep(i, n)
    {
        int a, p, x;
        cin >> a >> p >> x;
        if (x - a > 0)
        {
            ans = min(ans, p);
        }
    }
    if (ans == 1000000009)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
