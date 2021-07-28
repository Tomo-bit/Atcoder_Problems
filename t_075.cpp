#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

vector<ll> prime_factors(ll n)
{
    ll rem = n;
    vector<ll> p;
    for (ll i = 2; i * i <= n; i++)
    {
        while (rem % i == 0)
        {
            rem /= i;
            p.push_back(i);
        }
    }
    if (rem != 1LL)
        p.push_back(rem);
    return p;
}

int main()
{
    ll n;
    cin >> n;
    int ans = 0;
    vector<ll> vec = prime_factors(n);
    for (int i = 0; i <= 20; i++)
    {
        if ((1 << i) >= (int)vec.size())
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
