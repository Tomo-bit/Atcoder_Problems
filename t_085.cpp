#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll k;
    cin >> k;
    vector<ll> vec;
    for (ll i = 1; i * i <= k; i++)
    {
        if (k % i != 0)
            continue;
        vec.push_back(i);
        if (i != k / i)
            vec.push_back(k / i);
    }
    sort(vec.begin(), vec.end());

    ll ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i; j < vec.size(); j++)
        {
            ll a = vec[i], b = vec[j], c = 0;
            if ((k / a) < b)
                continue;
            if (k % (vec[i] * vec[j]) != 0)
                continue;
            c = k / (a * b);
            if (a <= b && b <= c)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
