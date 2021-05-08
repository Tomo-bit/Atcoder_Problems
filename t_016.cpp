#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll answer = 10000;
    for (ll i = 0; i < 10000; i++)
    {
        for (ll j = 0; j < 10000 - i; j++)
        {
            ll m = n - a * i - b * j;
            if (m >= 0)
            {
                ll r = m / c;
                if (m % c == 0)
                    answer = min(answer, i + j + r);
            }
        }
    }
    cout << answer << endl;
}
