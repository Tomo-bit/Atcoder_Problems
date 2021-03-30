#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll x;
    cin >> x;
    ll y = x / 500;
    ll w = (x % 500) / 5;
    ll ans = y * 1000 + w * 5;
    cout << ans << endl;
}
