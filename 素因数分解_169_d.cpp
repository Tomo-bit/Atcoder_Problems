#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll ans = 0;

    for (ll i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n != 1)
        mp[n]++;

    for (auto p : mp)
    {
        if (p.second != 0)
        {
            int n = 1;
            while (n * (n + 1) / 2 <= p.second)
            {
                n++;
            }
            ans += (n - 1);
        }
    }
    cout << ans << endl;
}
