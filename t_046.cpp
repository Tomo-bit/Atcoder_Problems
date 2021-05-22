#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll ans = 0;
    int n;
    cin >> n;
    map<int, ll> a, b, c;

    rep(i, n)
    {
        int x;
        cin >> x;
        x %= 46;
        a[x]++;
    }
    rep(i, n)
    {
        int a;
        cin >> a;
        a %= 46;
        b[a]++;
    }
    rep(i, n)
    {
        int a;
        cin >> a;
        a %= 46;
        c[a]++;
    }
    ans += a[0] * b[0] * c[0];
    rep(i, 46)
    {
        rep(j, 46)
        {
            ans += a[i] * b[j] * c[46 - i - j];
            ans += a[i] * b[j] * c[92 - i - j];
        }
    }
    cout << ans << endl;
}
