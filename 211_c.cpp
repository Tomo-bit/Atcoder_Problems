#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    string s;
    cin >> s;
    string t = "chokudai";
    vector<vector<ll>> dp(s.size() + 1, vector<ll>(9, 0));
    rep(i, s.size() + 1)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i < s.size() + 1; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            dp[i][j] = dp[i - 1][j];

            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            }
            dp[i][j] %= mod;
        }
    }
    cout << dp[s.size()][8] << endl;
}
