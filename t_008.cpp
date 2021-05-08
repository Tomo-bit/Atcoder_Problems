#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    long long mod = 1000000007;
    vector<vector<ll>> dp(100009, vector<ll>(8));
    dp[0][0] = 1;
    rep(i, n)
    {
        rep(j, 8)
        {
            dp[i + 1][j] += dp[i][j];
            if (s[i] == 'a' && j == 0)
                dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 't' && j == 1)
                dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'c' && j == 2)
                dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'o' && j == 3)
                dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'd' && j == 4)
                dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'e' && j == 5)
                dp[i + 1][j + 1] += dp[i][j];
            if (s[i] == 'r' && j == 6)
                dp[i + 1][j + 1] += dp[i][j];
        }
        rep(j, 8) dp[i + 1][j] %= mod;
    }
    cout << dp[n][7] << endl;
}
