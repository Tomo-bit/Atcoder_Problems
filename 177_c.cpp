#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long w = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        w += a[i];
        w %= 1000000007;
    }
    for (int i = 0; i < n; i++)
    {
        w -= a[i];
        if (w < 0)
        {
            w += 1000000007;
        }
        ans += a[i] * w;
        ans %= 1000000007;
    }
    cout << ans << endl;
}
