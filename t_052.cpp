#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll sum1 = 1;
    rep(i, n)
    {
        ll sum2 = 0;
        rep(j, 6)
        {
            ll a;
            cin >> a;
            sum2 += a;
        }
        sum1 *= sum2;
        sum1 %= 1000000007;
    }
    cout << sum1 << endl;
}
