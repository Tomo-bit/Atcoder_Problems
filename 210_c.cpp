#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> c(n + 10);
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= k; i++)
        mp[c[i]]++;
    int ans = mp.size();
    for (int i = k + 1; i <= n; i++)
    {
        mp[c[i]]++;
        mp[c[i - k]]--;
        if (mp[c[i - k]] == 0)
            mp.erase(c[i - k]);
        ans = max(ans, (int)mp.size());
    }
    cout << ans << endl;
}
