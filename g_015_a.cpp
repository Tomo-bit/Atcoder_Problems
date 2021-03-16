#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (n == 1 && b - a != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (a > b)
    {
        cout << 0 << endl;
        return 0;
    }
    ll ans = b * (n - 1) + a - a * (n - 1) - b + 1;
    cout << ans << endl;
}
