#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll k;
    cin >> k;
    vector<ll> dp(k + 10);
    dp[0] = 1;
    if (k % 9 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            int d = min(i, 9);
            for (int j = 1; j <= d; j++)
            {
                dp[i] += dp[i - j];
                dp[i] %= 1000000007;
            }
        }
        cout << dp[k] << endl;
    }
}
