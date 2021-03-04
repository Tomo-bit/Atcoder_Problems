#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (n >= b - 1)
    {
        ll ans = a * (b - 1) / b;
        cout << ans << endl;
        return 0;
    }
    else
    {
        ll ans = a * n / b;
        cout << ans << endl;
    }
}
