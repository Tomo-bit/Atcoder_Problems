#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll d = 1;
    ll b = 0;
    ll ans = 1000000000000000000;
    while (n >= d)
    {
        ll a = n / d;
        ll c = n % (a * d);
        ans = min(ans, a + b + c);
        b++;
        d *= 2;
    }
    cout << ans << endl;
}
