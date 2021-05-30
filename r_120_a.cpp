#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> sum(n);
    vector<ll> maxs(n);
    vector<ll> as(n);
    ll maxa = 0;
    rep(i, n)
    {
        ll q;
        cin >> q;
        as[i] = q;
        maxa = max(maxa, q);
        if (i > 0)
            sum[i] = sum[i - 1] + q;
        else
            sum[i] = q;
        maxs[i] = maxa;
    }
    vector<ll> sumsum(n);
    rep(i, n)
    {
        if (i > 0)
            sumsum[i] = sum[i] + sumsum[i - 1];
        else
            sumsum[i] = sum[i];
    }
    cout << sum[0] + maxs[0] << endl;
    for (int i = 1; i < n; i++)
    {
        cout << sum[i] + maxs[i] * (i + 1) + sumsum[i - 1] << endl;
    }
}
