#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    rep(is, 1 << n)
    {
        rep(i, h)
        {
            if (is >> i & 1 && is >> (i - 1) & 1)
            {
            }
        }
    }
}
