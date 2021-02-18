#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    ll ans = 0;
    ll now = 0;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int sentou = 0;
    for (int add = 0; add < n; add++)
    {

        now += a[add];
        if (now >= k)
        {
            while (now >= k)
            {
                ans += n - add;
                now -= a[sentou];
                sentou++;
            }
            continue;
        }
    }
    cout << ans << endl;
}
