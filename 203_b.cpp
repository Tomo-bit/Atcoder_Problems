#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    ll m = k * (k + 1) / 2;
    m *= n;
    ll q = 0;
    for (int i = 1; i <= n; i++)
    {
        q += i * 100 * k;
    }

    cout << m + q << endl;
}
