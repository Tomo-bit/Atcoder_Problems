#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    int m = *max_element(h.begin(), h.end());
    int ans = 0;
    rep(i, m)
    {
        ans++;
        for (int j = 1; j < n - 1; j++)
        {
            if (h[j] <= i && h[j - 1] > i)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (h[k] > i)
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
