#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll p;
    cin >> p;
    ll ans = 0;
    for (int g = 10; g >= 1; g--)
    {
        ll k = 1;
        for (int i = 1; i <= g; i++)
            k *= i;
        ans += p / k;
        p %= k;
    }
    cout << ans << endl;
}
