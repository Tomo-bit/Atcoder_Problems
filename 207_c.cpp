#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<ll>> data(n, vector<ll>(2));
    int ans = 0;
    rep(i, n)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            data[i][0] = 10 * l;
            data[i][1] = 10 * r;
        }
        if (t == 2)
        {
            data[i][0] = 10 * l;
            data[i][1] = 10 * r - 1;
        }
        if (t == 3)
        {
            data[i][0] = 10 * l + 1;
            data[i][1] = 10 * r;
        }
        if (t == 4)
        {
            data[i][0] = 10 * l + 1;
            data[i][1] = 10 * r - 1;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (data[i][1] >= data[j][0] && data[i][0] <= data[j][1])
                ans++;
        }
    }
    cout << ans << endl;
}
