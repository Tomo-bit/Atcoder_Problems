#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    string s;
    string x;
    cin >> s >> x;
    vector<vector<int>> dp(n + 1, vector<int>(10, -1));
    dp[n].push_back(0);
    for (int i = n - 1; i >= 0; i--)
    {
        if (x[i] == 'T')
        {
            rep(j, 10)
            {
                if (count(dp[i + 1].begin(), dp[i + 1].end(), (10 * j) % 7) || (count(dp[i + 1].begin(), dp[i + 1].end(), (10 * j + s[i] - '0') % 7)))
                {
                    dp[i].push_back(j);
                }
            }
        }
        if (x[i] == 'A')
        {
            rep(j, 10)
            {
                if (count(dp[i + 1].begin(), dp[i + 1].end(), (10 * j) % 7) && (count(dp[i + 1].begin(), dp[i + 1].end(), (10 * j + s[i] - '0') % 7)))
                {
                    dp[i].push_back(j);
                }
            }
        }
    }
    if (count(dp[0].begin(), dp[0].end(), 0))
    {
        cout << "Takahashi" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
}
