#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> a(n + 1);
    a[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i - l >= 0)
            a[i] = a[i - 1] + a[i - l];
        else
            a[i] = a[i - 1];
        a[i] %= 1000000007;
    }
    cout << a[n] << endl;
}
