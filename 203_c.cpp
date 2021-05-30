#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> pairs(n + 1);
    pairs[0].first = 0;
    pairs[0].second = 0;
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        pairs[i + 1].first = a;
        pairs[i + 1].second = b;
    }
    sort(pairs.begin(), pairs.end());
    rep(i, n)
    {
        if (pairs[i + 1].first - pairs[i].first > k)
        {
            cout << pairs[i].first + k << endl;
            return 0;
        }
        k -= pairs[i + 1].first - pairs[i].first;
        k += pairs[i + 1].second;
    }
    cout << pairs[n].first + k << endl;
}
