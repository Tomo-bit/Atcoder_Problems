#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    sort(l.begin(), l.end());
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int ab = l[i] + l[j];
            int w = lower_bound(l.begin(), l.end(), ab) - l.begin();
            if (w == n)
            {
                ans += n - j - 1;
                continue;
            }
            ans += max(0, w - j - 1);
        }
    }
    cout << ans << endl;
}
