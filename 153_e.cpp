#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    vector<vector<int>> dp(1010, vector<int>(10100, 300000000));
    int h, n;
    cin >> h >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    dp[0][h] = 0;
    rep(i, n) for (int j = h; j >= 0; j--)
    {
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);

        dp[i][max(0, j - a[i])] = min(dp[i][max(0, j - a[i])], dp[i][j] + b[i]);
    }
    cout << dp[n][0] << endl;
}
